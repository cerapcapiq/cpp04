#include "WrongDog.hpp"


WrongDog::WrongDog(const WrongDog &copy)
{
        std::cout << "Copy constructor for WrongDog is called" << std::endl;
        *this = copy;

}

WrongDog::WrongDog() 
{
    std::cout << "Constructor for WrongDog is called " << std::endl;
}

WrongDog::WrongDog(std::string type) : name(name)
{
    std::cout << "Constructor for WrongDog is called by name " <<  name << std::endl;
}

WrongDog &WrongDog::operator=(const WrongDog &copy)
{
    std::cout << "Assignation opreator for WrongDog is called" << std::endl;
    if (this == &copy)
        return *this;

    this->type = copy.type;
    return *this;
}

WrongDog:: ~WrongDog()
{
    std::cout << "Deconstructor for WrongDog is called " << std::endl;
}

void WrongDog::makeSound()
{
    std::cout << "No sound" << std::endl;
}