#ifndef CAT_HPP
# define CAT_HPP

#include <string>

#include "Animal.hpp"

class Cat : public Animal
{
    public:
        Cat();
        Cat(const std::string& name);
        Cat(const Cat& copy);
        ~Cat();

        Cat& operator=(const Cat& other);

        void makeSound();
        
};

#endif
