#include <iostream>

#include "Cat.hpp"

Cat::Cat() : Animal()
{
	std::cout << "Cat default constructor called by " << _type << std::endl;
	_type = "Cat";
	_brain = new Brain();

}

Cat::Cat(const Cat& copy) : Animal(copy)
{
	std::cout << "Cat copy constructor called" << std::endl;
	*this = copy;
}

Cat& Cat::operator=(const Cat& other)
{
	std::cout << "Cat assignment constructor called" << std::endl;
	if (this != &other)
	{
		Animal::operator=(other);
		delete _brain;
		_brain = new Brain(*other._brain);
	}
	return *this;
}


Brain* Cat::getBrain() const
{
	return _brain;
}

void Cat::makeSound() const
{
    std::cout << "Meow! Meow!" << std::endl;
}

Cat::~Cat()
{
    std::cout << "Cat destructor called by " << _type << std::endl;
}
