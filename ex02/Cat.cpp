#include "Cat.hpp"


Cat::Cat(const Cat &copy): Animal()
{
        std::cout << "Copy constructor for Cat is called" << std::endl;
        *this = copy;

}

Cat::Cat(): Animal()
{
    this->type = "Cat";
    std::cout << "Constructor for Cat is called " << std::endl;
}

Cat::Cat(std::string type) : name(name)
{
    std::cout << "Constructor for Cat is called by name " <<  name << std::endl;
}

Cat &Cat::operator=(const Cat &copy)
{
    std::cout << "Assignation opreator for Cat is called" << std::endl;
    if (this == &copy)
        return *this;

    this->type = copy.type;
    return *this;
}

void Cat::makeSound()
{
    std::cout << "Meowwww" << std::endl;
}

Cat:: ~Cat()
{
    
}