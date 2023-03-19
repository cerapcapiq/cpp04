#include "Dog.hpp"


Dog::Dog(const Dog &copy): Animal()
{
        std::cout << "Copy constructor for Dog is called" << std::endl;
        *this = copy;

}

Dog::Dog(): Animal()
{
    this->type = "Dog";
    std::cout << "Constructor for Dog is called " << std::endl;
}

Dog::Dog(std::string type) : name(name)
{
    std::cout << "Constructor for Dog is called by name " <<  name << std::endl;
}

Dog &Dog::operator=(const Dog &copy)
{
    std::cout << "Assignation opreator for Dog is called" << std::endl;
    if (this == &copy)
        return *this;

    this->type = copy.type;
    return *this;
}

void Dog::makeSound()
{
    std::cout << "Woooof" << std::endl;
}

Dog:: ~Dog()
{
    
}