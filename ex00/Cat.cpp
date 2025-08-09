#include <iostream>

#include "Cat.hpp"

Cat::Cat() : Animal()
{
    
}

Cat::Cat(const std::string& type) : Animal(type)
{
    
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
    
}