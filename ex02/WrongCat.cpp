#include "WrongCat.hpp"


WrongCat::WrongCat(const WrongCat &copy)
{
        std::cout << "Copy constructor for WrongCat is called" << std::endl;
        *this = copy;

}

WrongCat::WrongCat() 
{
    std::cout << "Constructor for WrongCat is called " << std::endl;
}

WrongCat::WrongCat(std::string type) : name(name)
{
    std::cout << "Constructor for WrongCat is called by name " <<  name << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &copy)
{
    std::cout << "Assignation opreator for WrongCat is called" << std::endl;
    if (this == &copy)
        return *this;

    this->type = copy.type;
    return *this;
}

WrongCat:: ~WrongCat()
{
    std::cout << "Deconstructor for WrongCat is called " << std::endl;
}

void WrongCat::makeSound()
{
    std::cout << "No sound" << std::endl;
}