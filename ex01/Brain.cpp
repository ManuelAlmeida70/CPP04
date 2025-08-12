#include <iostream>
#include <cstdlib>

#include "Brain.hpp"


Brain::Brain()
{

	std::cout << "Brain default constructor called" << std::endl;
	for (int i = 0; i < 100; i++)
	{
		_ideas[i] = "Empty idea";
	}
}

Brain::Brain(const Brain& copy)
{
	*this = copy;
}

Brain& Brain::operator=(const Brain& other)
{
	std::cout << "Brain assignment operator called" << std::endl;
	if (this != &other)
	{
		for (int i = 0; i < 100; i++)
		{
			_ideas[i] = other._ideas[i];
		}
	}
	return *this;
}

Brain::~Brain()
{
	std::cout << "Brain destructor called" << std::endl;
}

void Brain::setIdeas(int i, const std::string& text)
{
	if (i < 0 || i >= 100)
	{
		std::cerr << "\nError: index " << i << " out of range" << std::endl;
		exit(1);
	}
	_ideas[i] = (text.empty()) ? "DefaultBrain" : text;
}

std::string Brain::getIdeas(int i) const
{
	if (i < 0 || i >= 100)
	{
		std::cerr << "\nError: index " << i << " out of range" << std::endl;
		exit(1);
	}
	return _ideas[i];
}
