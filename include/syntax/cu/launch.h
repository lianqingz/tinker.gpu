#pragma once
#include "glob.gpucard.h"
#include "tool/cudalib.h"
#include "tool/error.h"


namespace tinker {
/**
 * \ingroup cuda_syntax
 * Launch a CUDA kernel. The launching is non-blocking if not using the
 * default CUDA stream, otherwise the launching is blocking.
 * \param st  CUDA stream.
 * \param sh  Dynamic shared memory (bytes per block).
 * \param bs  Thread block size.
 * \param np  Hint to determine the grid dimension (often is the loop limit).
 * \param k   CUDA `__global__` kernel.
 * \param a   Arguments of the kernel.
 */
template <class K, class... Ts>
void launch_k4(cudaStream_t st, size_t sh, int bs, int np, K k, Ts&&... a)
{
   int gs = (np + bs - 1) / bs;
   k<<<gs, bs, sh, st>>>(std::forward<Ts>(a)...);
   if (st == nullptr)
      check_rt(cudaStreamSynchronize(nullptr));
}


/**
 * \ingroup cuda_syntax
 * Launch a CUDA kernel with 0 dynamic shared memory.
 * \see launch_k4
 */
template <class K, class... Ts>
void launch_k2s(cudaStream_t st, int bs, int np, K k, Ts&&... a)
{
   const size_t sh = 0;
   launch_k4(st, sh, bs, np, k, std::forward<Ts>(a)...);
}


/**
 * \ingroup cuda_syntax
 * Launch a CUDA kernel with 0 dynamic shared memory and default block
 * size (#BLOCK_DIM).
 * \see BLOCK_DIM, launch_k2s, launch_k4
 */
template <class K, class... Ts>
void launch_k1s(cudaStream_t st, int np, K k, Ts&&... a)
{
   const int bs = BLOCK_DIM;
   launch_k2s(st, bs, np, k, std::forward<Ts>(a)...);
}


template <class K, class... Ts>
void launch_k4a(cudaStream_t st, size_t sh, int bs, int np, K k, Ts&&... a)
{
   int gs = (np + bs - 1) / bs;
   k<<<gs, bs, sh, st>>>(std::forward<Ts>(a)...);
}


template <class K, class... Ts>
void launch_k2a(cudaStream_t st, int bs, int np, K k, Ts&&... a)
{
   const size_t sh = 0;
   launch_k4a(st, sh, bs, np, k, std::forward<Ts>(a)...);
}


template <class K, class... Ts>
void launch_k1a(cudaStream_t st, int np, K k, Ts&&... a)
{
   const int bs = BLOCK_DIM;
   launch_k2a(st, bs, np, k, std::forward<Ts>(a)...);
}
}
