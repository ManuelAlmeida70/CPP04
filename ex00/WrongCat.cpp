#include <iostream>

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal()
{

}

WrongCat::WrongCat(const std::string& type) : WrongAnimal(type)
{

}

WrongCat::WrongCat(const WrongCat& copy) : WrongCat(copy)
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
    
}