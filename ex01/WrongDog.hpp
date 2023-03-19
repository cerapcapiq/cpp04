#pragma once
#include <iostream>
#include "Animal.hpp"

class WrongDog : public Animal
{
    protected :
    std::string type;

    public :
    WrongDog();
    virtual ~WrongDog();
    WrongDog(const WrongDog &copy);

    WrongDog &operator=(const WrongDog &copy);

    void makeSound();

    std::string getType();

    

};