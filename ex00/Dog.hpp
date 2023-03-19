

#pragma once
#include "Animal.hpp"
#include <iostream>

#pragma once
#include "Animal.hpp"
#include <iostream>

class Dog : public Dog
{

     public :
    Dog();
    virtual ~Dog();
    Dog(const Dog &copy);

    Dog &operator=(const Dog &copy);

    void makeSound();

};