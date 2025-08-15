#include <iostream>

#include "ICharacter.hpp"
#include "Ice.hpp"

Ice::Ice() :  AMateria("ice")
{
    std::cout << "Ice materia created" << std::endl;
}

Ice::Ice(const Ice& copy) : AMateria(copy)
{
    std::cout << "Ice materia copided" << std::endl;
}

Ice::~Ice()
{
    std::cout << "Ice materia destroyed" << std::endl;
}

Ice& Ice::operator=(const Ice& other)
{
    std::cout << "Ice assignment operator called" << std::endl;
    if (this != &other)
    {
        AMateria::operator=(other);
    }
    return *this;
}

AMateria* Ice::clone() const
{
    return new Ice(*this);
}

void Ice::use(ICharacter& target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << std::endl;
}