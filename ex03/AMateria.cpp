#include <iostream>

#include "AMateria.hpp"

AMateria::AMateria(std::string const & type) : _type(type)
{
    std::cout << "AMateria " << type << "created" << std::endl;
}

std::string const & AMateria::getType() const
{
    return _type;
}

AMateria::~AMateria()
{
    std::cout << "AMateria " << _type << "Destroyed" << std::endl;
}

void AMateria::use(ICharacter& target)
{
    std::cout << "AMateria used on " << target.getName() << std::endl;
}