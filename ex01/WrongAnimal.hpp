#pragma once
#include "Animal.hpp"
#include <iostream>

class WrongAnimal{
    protected :
    std::string type;

    public :
    WrongAnimal();
    virtual ~WrongAnimal();
    WrongAnimal(const WrongAnimal &copy);

    WrongAnimal &operator=(const WrongAnimal &copy);

    virtual void makeSound();

    std::string getType();

    

};