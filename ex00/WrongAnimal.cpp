#include "WrongAnimal.hpp"


WrongAnimal::WrongAnimal(const WrongAnimal &copy)
{
        std::cout << "Copy constructor for WrongAnimal is called" << std::endl;
        *this = copy;

}

WrongAnimal::WrongAnimal() 
{
    std::cout << "Constructor for WrongAnimal is called " << std::endl;
}

WrongAnimal::WrongAnimal(std::string type) : name(name)
{
    std::cout << "Constructor for WrongAnimal is called by name " <<  name << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &copy)
{
    std::cout << "Assignation opreator for WrongAnimal is called" << std::endl;
    if (this == &copy)
        return *this;

    this->type = copy.type;
    return *this;
}

WrongAnimal:: ~WrongAnimal()
{
    std::cout << "Deconstructor for WrongAnimal is called " << std::endl;
}

void WrongAnimal::makeSound()
{
    std::cout << "No sound" << std::endl;
}