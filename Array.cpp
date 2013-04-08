/*
    I designed this array class because I could and because I might need it for an
    odd school project. It has a similar interfact to the standard array, but it
    does not yet have the ability to initialize with an initializer list. The
    initializer list support may or may not be added in the future.
    
    Copyright Christopher Almquist 2013
*/


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
