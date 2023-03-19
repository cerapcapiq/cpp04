#pragma once
#include <iostream>

class Animal{
    protected :
    std::string type;

    public :
    Animal();
    virtual ~Animal();
    Animal(const Animal &copy);

    Animal &operator=(const Animal &copy);

    virtual void makeSound();

    std::string getType();

    

};