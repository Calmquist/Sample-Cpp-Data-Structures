/*    
    I designed this array class because I could and because I might need it for an
    odd school project. It has a similar interfact to the standard array, but it
    does not yet have the ability to initialize with an initializer list. The
    initializer list support may or may not be added in the future.
    
    Copyright Christopher Almquist 2013
*/

#ifndef ARRAY_H
#define ARRAY_H

template<class T>
class Array
{
public:
    Array(int length);

    ~Array();

    int getSize();
    T& at(int element);

    T& operator[] (int element)
    {
  return at(element);
    }

    // to do
    /*T* operator= (int element)
    {
	// stuff
    }*/    

private:
    int size;
    T *p;
};

#endif // ARRAY_H
