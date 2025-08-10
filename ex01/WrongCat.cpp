#include <iostream>

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal()
{
    std::cout << "WrongCat default constructor called by " << _type << std::endl;

}

WrongCat::WrongCat(const std::string& type) : WrongAnimal(type)
{
    std::cout << "WrongCat initializator constructor called by " << _type << std::endl;

}

WrongCat::WrongCat(const WrongCat& copy) : WrongAnimal(copy)
{
    *this = copy;
}

WrongCat& WrongCat::operator=(const WrongCat& other)
{
    if (this != &other)
    {
        WrongAnimal::operator=(other);
        this->_type = other._type;
    }
    return *this;
}

void WrongCat::makeSound() const
{
    std::cout << "WrongCat Meow! Meow!" << std::endl;
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat destructor called by " << _type << std::endl;
}
