#include "gpu/decl_dataop.h"
#include "gpu/decl_mdstate.h"
#include "gpu/decl_nblist.h"
#include "gpu/e_vdw.h"
#include "rc.h"

TINKER_NAMESPACE_BEGIN
namespace gpu {
nblist_st vlist_obj_;
nblist_st* vlst;
nblist_st dlist_obj_;
nblist_st* dlst;
nblist_st clist_obj_;
nblist_st* clst;
nblist_st mlist_obj_;
nblist_st* mlst;
nblist_st ulist_obj_;
nblist_st* ulst;

int use_vdw_list() {
  int ret = 0;
  if (use_evdw())
    ++ret;
  else
    return ret;

  if (limits::use_vlist)
    ++ret;
  return ret;
}

int use_disp_list() {
  int ret = 0;
  if (potent::use_disp)
    ++ret;
  else
    return ret;

  if (limits::use_dlist)
    ++ret;
  return ret;
}

int use_charge_list() {
  int ret = 0;
  if (potent::use_charge || potent::use_solv)
    ++ret;
  else
    return ret;

  if (limits::use_clist)
    ++ret;
  return ret;
}

int use_mpole_list() {
  int ret = 0;
  if (potent::use_mpole || potent::use_polar || potent::use_chgtrn ||
      potent::use_solv)
    ++ret;
  else
    return ret;

  if (limits::use_mlist)
    ++ret;
  return ret;
}

int use_usolv_list() {
  int ret = 0;
  if (potent::use_polar)
    ++ret;
  else
    return ret;

  if (limits::use_ulist)
    ++ret;
  return ret;
}

void nblist_update_vdw_list() {
  evdw_reduce_xyz();
  nblist_update(gpu::vlist_obj_, gpu::vlst);
}

// see also cutoffs.f
// In the gas phase calculation where neighbor list is not used, we should
// always first check the value of maxn.
// If maxn is equal to 1, it means the value of cutoff can even be INF.
static int nblist_maxlst_(int maxn, double cutoff, double buffer) {
  if (maxn > 1) {
    double buf = (cutoff + buffer);
    int limit = buf * buf * buf + 100;
    int ans = std::min(limit, maxn);
    if (ans > 1) {
      const int magic = 32;
      ans = (ans + magic - 1) / magic;
      ans *= magic;
    }
    return ans;
  } else {
    return 1;
  }
}

static void nblist_op_dealloc_(nblist_st& st, nblist_st*& list) {
  check_cudart(cudaFree(st.nlst));
  check_cudart(cudaFree(st.lst));
  check_cudart(cudaFree(st.xold));
  check_cudart(cudaFree(st.yold));
  check_cudart(cudaFree(st.zold));
  check_cudart(cudaFree(list));
}

static void nblist_op_alloc_(nblist_st& st, nblist_st*& list, int maxn,
                             double cutoff, double buffer, const real* _x,
                             const real* _y, const real* _z) {
  const size_t rs = sizeof(int);
  size_t size;

  size = n * rs;
  check_cudart(cudaMalloc(&st.nlst, size));

  int maxlst = nblist_maxlst_(maxn, cutoff, buffer);
  size = maxlst * n * rs;
  check_cudart(cudaMalloc(&st.lst, size));

  st.maxnlst = maxlst;
  st.cutoff = cutoff;
  st.buffer = buffer;

  if (maxlst == 1) {
    st.xold = nullptr;
    st.yold = nullptr;
    st.zold = nullptr;
  } else {
    size = n * sizeof(real);
    check_cudart(cudaMalloc(&st.xold, size));
    check_cudart(cudaMalloc(&st.yold, size));
    check_cudart(cudaMalloc(&st.zold, size));
  }

  st.x = _x;
  st.y = _y;
  st.z = _z;

  size = sizeof(nblist_st);
  check_cudart(cudaMalloc(&list, size));
  check_cudart(cudaMemcpy(list, &st, size, cudaMemcpyHostToDevice));
}

void nblist_data(int op) {
  int maxnlst = 0;
  int u = 0;

  // vlist
  u = use_vdw_list();
  if (u) {
    if (op & op_dealloc)
      nblist_op_dealloc_(vlist_obj_, vlst);

    if (op & op_alloc) {
      maxnlst = 2500;
      if (u == list_double_loop)
        maxnlst = 1;
      nblist_op_alloc_(vlist_obj_, vlst, maxnlst, limits::vdwcut,
                       neigh::lbuffer, xred, yred, zred);
    }

    if (op & op_copyin) {
      evdw_reduce_xyz();
      nblist_build(vlist_obj_, vlst);
    }
  }

  // dlist
  u = use_disp_list();
  if (u) {
    if (op & op_dealloc)
      nblist_op_dealloc_(dlist_obj_, dlst);

    if (op & op_alloc) {
      maxnlst = 2500;
      if (u == list_double_loop)
        maxnlst = 1;
      nblist_op_alloc_(dlist_obj_, dlst, maxnlst, limits::dispcut,
                       neigh::lbuffer, x, y, z);
    }

    if (op & op_copyin) {
    }
  }

  // clist
  u = use_charge_list();
  if (u) {
    if (op & op_dealloc)
      nblist_op_dealloc_(clist_obj_, clst);

    if (op & op_alloc) {
      maxnlst = 2500;
      if (u == list_double_loop)
        maxnlst = 1;
      nblist_op_alloc_(clist_obj_, clst, maxnlst, limits::chgcut,
                       neigh::lbuffer, x, y, z);
    }

    if (op & op_copyin) {
    }
  }

  // mlist
  u = use_mpole_list();
  if (u) {
    if (op & op_dealloc)
      nblist_op_dealloc_(mlist_obj_, mlst);

    if (op & op_alloc) {
      maxnlst = 2500;
      if (u == list_double_loop)
        maxnlst = 1;
      nblist_op_alloc_(mlist_obj_, mlst, maxnlst, limits::mpolecut,
                       neigh::lbuffer, x, y, z);
    }

    if (op & op_copyin) {
      nblist_build(mlist_obj_, mlst);
    }
  }

  // ulist
  u = use_usolv_list();
  if (u) {
    if (op & op_dealloc)
      nblist_op_dealloc_(ulist_obj_, ulst);

    if (op & op_alloc) {
      maxnlst = 500;
      if (u == list_double_loop)
        maxnlst = 1;
      nblist_op_alloc_(ulist_obj_, ulst, maxnlst, limits::usolvcut,
                       neigh::pbuffer, x, y, z);
    }

    if (op & op_copyin) {
    }
  }
}
}
TINKER_NAMESPACE_END
