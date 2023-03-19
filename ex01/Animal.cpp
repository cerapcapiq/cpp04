#include "Animal.hpp"


Animal::Animal(const Animal &copy)
{
        std::cout << "Copy constructor for Animal is called" << std::endl;
        *this = copy;

}

Animal::Animal() 
{
    std::cout << "Constructor for Animal is called " << std::endl;
}

Animal::Animal(std::string type) : name(name)
{
    std::cout << "Constructor for Animal is called by name " <<  name << std::endl;
}

Animal &Animal::operator=(const Animal &copy)
{
    std::cout << "Assignation opreator for Animal is called" << std::endl;
    if (this == &copy)
        return *this;

    this->type = copy.type;
    return *this;
}

Animal:: ~Animal()
{
    std::cout << "Deconstructor for Animal is called " << std::endl;
}

void Animal::makeSound()
{
    std::cout << "No sound" << std::endl;
}