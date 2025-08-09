#include <iostream>

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : _type("default_wrong_animal")
{
    
}

WrongAnimal::WrongAnimal(const std::string& type) : _type(type)
{

}

WrongAnimal::WrongAnimal(const WrongAnimal& copy)
{
    *this = copy;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other)
{
    if (this != &other)
    {
        this->_type = other._type;
    }
    return *this;
}

void WrongAnimal::setType(const std::string& type)
{
    _type = (type.empty()) ? "Wrong_default_animal" : type;
}

std::string WrongAnimal::getType() const
{
    return _type;
}

void WrongAnimal::makeSound() const
{
    std::cout << "WrongAnimal generic sound!" << std::endl;
}

WrongAnimal::~WrongAnimal()
{

}