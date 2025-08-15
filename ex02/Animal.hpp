#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <string>

class Animal
{
    public:
        Animal();
        Animal(const std::string& type);
        Animal(const Animal& copy);
        virtual ~Animal();

        Animal& operator=(const Animal& other);

        virtual void makeSound() const = 0;


        std::string getType() const;
        void setType(const std::string& type);
        
    protected:
        std::string _type;
};

#endif