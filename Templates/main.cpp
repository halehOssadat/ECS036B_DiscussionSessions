#include <iostream>

#include "Vector.h"

template<typename Sequence, typename Value>
Value sum(const Sequence& seq, Value v){
    for(size_t i = 0; i < seq.size(); ++i)
        v += seq[i];
    return v;
}

int main(int argc, char **argv){
       
    Vector<int> vi(3);
    vi[0] = 1;
    vi[1] = 2;
    vi[2] = 4;

    int x = sum(vi, 0);
    std::cout << "x: " << x << std::endl;


    Vector<double> doubleV(4);
    doubleV[0] = 0.0; doubleV[1] = 2.3; doubleV[2] = 3.0; doubleV[3] = 1.5;

    double y = sum(doubleV, 0.0);
    std::cout << "y: " << y << std::endl;

    return 0;
}