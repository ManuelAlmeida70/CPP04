#include <iostream>

#include "Animal.hpp"

Animal::Animal() : _type("default_animal")
{
    std::cout << "Animal default constructor called by " << _type << std::endl;
}

Animal::Animal(const std::string& type) : _type(type)
{
    std::cout << "Animal initializator constructor called by " << _type << std::endl;
}

Animal::Animal(const Animal& copy)
{
	std::cout << "Animal copy constructor called" << std::endl;
	*this = copy;
}

Animal& Animal::operator=(const Animal& copy)
{
	std::cout << "Animal assignment constructor called" << std::endl;
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
    std::cout << "Animal destructor called by " << _type << std::endl;
}
