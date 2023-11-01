#ifndef _ANIMALS_
#define _ANIMALS_

struct Animal {
    
    Animal(size_t ID):id(ID){}
    
    virtual void feature() const = 0;
    
    size_t getId() const { return id; }

private:
    const size_t id; 

};

struct Bird : public virtual Animal {
    Bird():Animal(1){};

    virtual void feature() const override {
        std::cout << "Bird has feather" << std::endl;
    }
};

struct Mammal : public virtual Animal {
    Mammal():Animal(2){}

    virtual void feature() const override{
        std::cout << "Mammal has hair" << std::endl;
    }
};

struct Bat : public Bird, Mammal {
    Bat():Animal(3){};
    
    virtual void feature() const override {
        std::cout << "Bat is a bird and mammal." << std::endl;  
        Bird::feature(); // Accessing Bird's method 
        Mammal::feature();  // Accessing Mammal's method
    }
};

#endif