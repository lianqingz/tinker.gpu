#ifndef TINKER_DEVICE_VECTOR_H_
#define TINKER_DEVICE_VECTOR_H_

#include "device_memory.h"

TINKER_NAMESPACE_BEGIN
template <class T, size_t N>
struct DeviceRawPointer {
  typedef T (*Type)[N];
};

template <class T>
struct DeviceRawPointer<T, 1> {
  typedef T* Type;
};

template <class T, size_t N = 1, class Allocate = DeviceAllocator<T>>
class DeviceVector : private std::vector<T, Allocate> {
private:
  typedef std::vector<T, DeviceAllocator<T>> Base;
  typedef typename DeviceRawPointer<T, N>::Type PointerType;

public:
  PointerType data() { return reinterpret_cast<PointerType>(Base::data()); }

  void resize(size_t nelem) {
    if (Base::size())
      Base::clear();
    Base::reserve(nelem);
  }

public:
  template <class U>
  void copyin(const U* first, size_t nelem) {
    // must be Base::data() so will return a pointer of type T*
    // this->data() will return a pointer of type T(*)[N]
    Allocate::copyin_array(Base::data(), first, nelem);
  }
};
TINKER_NAMESPACE_END

#endif
