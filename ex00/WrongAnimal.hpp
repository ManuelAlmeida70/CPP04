#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <string>

class WrongAnimal
{
    public:
        WrongAnimal();
        WrongAnimal(const std::string& type);
        WrongAnimal(const WrongAnimal& copy);
        ~WrongAnimal();

        WrongAnimal& operator=(const WrongAnimal& other);

        void makeSound() const;


        std::string getType() const;
        void setType(const std::string& type);
        
    protected:
        std::string _type;
};

#endif