#include <iostream>

#include "Animal.hpp"

Animal::Animal()
{
    std::cout << "Animal default constructor calleb" << std::endl;
}

Animal::Animal(const std::string& type) : _type(type)
{

}
