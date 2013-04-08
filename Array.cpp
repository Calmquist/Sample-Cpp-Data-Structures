#include "Array.h"

template<class T>
Array<T>::Array(int length)
{
    p = (T*) ::operator new(sizeof(T) * (length + 1));
    size = length;
}

template<class T>
Array<T>::~Array()
{
    delete p;
}

template<class T>
int Array<T>::getSize()
{
    return size;
}

template<class T>
T& Array<T>::at(int element)
{
    assert(element >= 0 && element < size);
    return *(p + element);
}
