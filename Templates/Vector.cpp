#include <stdexcept>
#include "Vector.h"

template<typename T>
Vector<T>::Vector(int s){
    if (s < 0)  throw std::runtime_error("Negative size");

    elem = new T[s];
    sz = s;
}

template<typename T>
const T& Vector<T>::operator[](int i) const
{
    if (i < 0 || size() <= i)
        throw std::out_of_range("Index out of bounds");
    return elem[i];

}

template<typename T>
T& Vector<T>::operator[](int i)
{
    if (i < 0 || size() <= i)
        throw std::out_of_range("Index out of bounds");
    return elem[i];

}

template struct Vector<int>;
template struct Vector<double>;
template struct Vector<char>;
template struct Vector<std::string>;