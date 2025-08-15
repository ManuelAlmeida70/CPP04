#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include <string>

//class ICharacter;

#include "ICharacter.hpp"

class AMateria
{
    public:
        AMateria(std::string const & type);
        ~AMateria();

        std::string const & getType() const;

        AMateria(const AMateria& amateria);
        AMateria& operator=(const AMateria& amateria);

        virtual AMateria* clone() const = 0;
        virtual void use(ICharacter& target);
    
    protected:
        std::string _type;

};

#endif