#include <iostream>

#include "animals.h"

int main(int argc, char** argv){
    Bat myBat;
    std::cout << "The id of my bat is: " << myBat.getId() << std::endl;
    myBat.feature();
/*
    std::cout << "----------- up casting with copy --------------" << std::endl;
    Bird myBird = static_cast<Bird>(myBat); // (Bird) myBat;
    std::cout << "The id of my new bat bird is: " << myBird.getId() << std::endl;
    myBird.feature();

    /*std::cout << "------------up casting with reference---------" << std::endl;
    Bird* myBirdptr = static_cast<Bird*>(&myBat); // (Bird*) &myBat; 
    std::cout << "The id of my new bat bird is: " << myBirdptr->getId() << std::endl;
    myBirdptr->feature();

    std::cout << "------------up casting with copy using dynamic casting-------" << std::endl;
    Bird* myBirdptr_dynamic = dynamic_cast<Bird*>(&myBat); // (Bird*) &myBat; 
    std::cout << "The id of my new bat bird is: " << myBirdptr_dynamic->getId() << std::endl;
    myBirdptr_dynamic->feature();

    std::cout << "------------Down casting with copy using dynamic casting-------" << std::endl;
    Bat* mybat_recovered = dynamic_cast<Bat*>(myBirdptr_dynamic); // (Bat *) myBirdptr_dynamic
    mybat_recovered->feature();

    std::cout << "mammal---------------------" << std::endl;
    Mammal* myMammalptr = dynamic_cast<Mammal *>(myBirdptr_dynamic); // static_cast<Mammal *>(myBirdptr_dynamic); // This gets compile error
    myMammalptr->feature();

    int a = 10;
    char c = 'a';
   
    // Pass at compile time, 
    // may fail at run time
    int* q = (int*)&c;
    std::cout << *q << std::endl;

    char *p = &c;
    std::cout << *p << std::endl;
    // int* p = static_cast<int*>(&c); // For this I will get a compile error
*/
    return 0;
}
