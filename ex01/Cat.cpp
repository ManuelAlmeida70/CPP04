#include <iostream>

#include "Cat.hpp"

Cat::Cat() : Animal()
{
    std::cout << "Cat default constructor called by " << _type << std::endl;
}

Cat::Cat(const std::string& type) : Animal(type)
{
    std::cout << "Cat initializator constructor called by " << _type << std::endl;
}

Cat::Cat(const Cat& copy) : Animal(copy)
{
    *this = copy;
}

Cat& Cat::operator=(const Cat& other)
{
    if (this != &other)
    {
        Animal::operator=(other);
        this->_type = other._type;
    }
    return *this;
}

void Cat::makeSound() const
{
    std::cout << "Meow! Meow!" << std::endl;
}

Cat::~Cat()
{
    std::cout << "Cat destructor called by " << _type << std::endl;
}