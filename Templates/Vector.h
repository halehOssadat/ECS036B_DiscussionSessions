#ifndef _VECTOR_H
#define _VECTOR_H

#include <string.h>

// Vector of all types of T
template<typename T>
struct Vector
{
  explicit Vector(int s);
  ~Vector(){ delete[] elem;}
// other operations 
  T& operator[](int i);
  const T& operator[](int i) const;
  int size() const { return sz;}
private:
    T* elem; // elem points to an array of sz elements of type T
    int sz;
};

#endif