#ifndef DOG_HPP
# define DOG_HPP

#include <string>


#include "Animal.hpp"

class Dog : public Animal
{
    public:
        Dog();
        Dog(std::string& name);
        Dog(const Dog& copy);
        ~Dog();

        Dog& operator=(const Dog& other);

        void makeSound();
    
};

#endif