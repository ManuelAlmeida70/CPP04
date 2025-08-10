#include <iostream>

#include "Dog.hpp"

Dog::Dog() : Animal()
{
    std::cout << "Dog default constructor called by " << _type << std::endl;
}

Dog::Dog(const std::string& type) : Animal(type)
{
    std::cout << "Dog initializator constructor called by " << _type << std::endl;
}

Dog::Dog(const Dog& copy) : Animal(copy)
{
    *this = copy;
}

Dog& Dog::operator=(const Dog& other)
{
    if (this != &other)
    {
        Animal::operator=(other);
        this->_type = other._type;
    }
    return *this;
}

void Dog::makeSound() const
{
    std::cout << "Woof! Woof!" << std::endl;
}

Dog::~Dog()
{
    std:: cout << "Dog destructor called by " << _type << std::endl;
}