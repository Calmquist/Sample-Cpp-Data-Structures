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
