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

AMateria::AMateria(const AMateria& copy) : _type(copy._type)
{
    std::cout << "AMateria " << _type << " copied" << std::endl;
}

AMateria::~AMateria()
{
    std::cout << "AMateria " << _type << "Destroyed" << std::endl;
}


AMateria& AMateria::operator=(const AMateria& other)
{
    std::cout << "AMateria assignment operator called" << std::endl;
    if (this != &other)
    {
        //O enunciado diz: copiar um type de AMateria nao faz sentido
    }
    return *this;
}

void AMateria::use(ICharacter& target)
{
    std::cout << "AMateria used on " << target.getName() << std::endl;
}