

#pragma once
#include "Animal.hpp"
#include <iostream>

class Cat : public Animal
{

     public :
    Cat();
    virtual ~Cat();
    Cat(const Cat &copy);

    Cat &operator=(const Cat &copy);

    void makeSound();

};

