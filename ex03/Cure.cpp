#include <iostream>

#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{
    std::cout << "Cure materia created" << std::endl;
}

Cure::Cure(const Cure& copy) : AMateria(copy)
{
    std::cout << "Cure materia copied" << std::endl;
}

Cure::~Cure()
{
    std::cout << "Cure materia destroyed" << std::endl;
}

Cure& Cure::operator=(const Cure& other)
{
    std::cout << "Cure assignment operator called" << std::endl;
    if (this != &other)
    {
        this->_type = other._type;
    }
    return *this;
}

void Cure::use(ICharacter& target)
{
    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}