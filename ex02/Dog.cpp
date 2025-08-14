#include <iostream>

#include "Dog.hpp"

Dog::Dog() : Animal()
{
    std::cout << "Dog default constructor called by " << _type << std::endl;
    _type = "Dog";
    _brain = new Brain();
}

Dog::Dog(const Dog& copy) : Animal(copy)
{
	std::cout << "Dog copy constructor called" << std::endl;
	_brain = new Brain(*copy._brain);//deep copy
}

Dog& Dog::operator=(const Dog& other)
{
    if (this != &other)
    {
        Animal::operator=(other);
        delete _brain;
	_brain = new Brain(*other._brain);
    }
    return *this;
}

void Dog::makeSound() const
{
    std::cout << "Woof! Woof!" << std::endl;
}

Brain* Dog::getBrain() const
{
	return _brain;
}

Dog::~Dog()
{
    std:: cout << "Dog destructor called by " << _type << std::endl;
}
