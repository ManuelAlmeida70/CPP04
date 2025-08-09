#include <iostream>

#include "Animal.hpp"

Animal::Animal() : _type("default_animal")
{
    
}

Animal::Animal(const std::string& type) : _type(type)
{
    
}

Animal::Animal(const Animal& copy)
{
    *this = copy;
}

Animal& Animal::operator=(const Animal& copy)
{
    if (this != &copy)
    {
        this->_type = copy._type;
    }
    return *this;
}

void Animal::setType(const std::string& type)
{
    _type = (type.empty()) ? "default_animal" : type;
}

std::string Animal::getType() const
{
    return _type;
}

void Animal::makeSound() const
{
    std::cout << "generic animal sound!!!" << std::endl;
}

Animal::~Animal()
{
    
}