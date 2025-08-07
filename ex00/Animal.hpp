#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <string>

class Animal
{
    public:
        Animal();
        Animal(const std::string& name);
        Animal(const Animal& copy);
        virtual ~Animal();

        Animal& operator=(const Animal& other);

        virtual void makeSound();


        void getType() const;
        std::string setType(const std::string& type);
        
    protected:
        std::string _type;
};

#endif