

#pragma once
#include "WrongAnimal.hpp"
#include <iostream>

class WrongCat : public Animal
{

     public :
    WrongCat();
    virtual ~WrongCat();
    WrongCat(const WrongCat &copy);

    WrongCat &operator=(const WrongCat &copy);

    void makeSound();

};

