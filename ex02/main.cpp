#include <iostream>


#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"


int main()
{
	std::cout << "=====Basic test=====" << std::endl;
	const Animal* j = new Dog();
	const Animal* i = new Dog();

	delete j;
	delete i;

	std::cout << "\n=====Array test=====" << std::endl;
	Animal* animals[4];

	const int arraySize = sizeof(animals) / sizeof(animals[0]);
	std::cout << "Array size calculated: " << arraySize << std::endl;

	for (int k = 0; k < arraySize; k++)
	{
		if (k < arraySize / 2)
		{
			animals[k] = new Dog();
		}
		else
		{
			animals[k] = new Cat();
		}
	}
	
	std::cout << "\n-----Making sounds-----" << std::endl;
	for (int k = 0; k < arraySize; k++)
	{
		std::cout << animals[k]->getType() << ": ";
		animals[k]->makeSound();
	}

	std::cout << "\n-----Deleting animals-----" << std::endl;
	for (int k = 0; k < arraySize; k++)
	{
		delete animals[k];
	}

	std::cout << "\n=====Deep copy test=====" << std::endl;
	Dog original;
	original.getBrain()->setIdeas(0, "I am the dog of Mazunga");
	original.getBrain()->setIdeas(1, "I love Mazunga");

	std::cout << "\n=====Creating ideas=====" << std::endl;
	Dog copy(original);

	std::cout << "\n-----Original ideas-----" << std::endl;
	std::cout << "Original idea 0: " <<  original.getBrain()->getIdeas(0) << std::endl;
	std::cout << "Original idea 1: " << original.getBrain()->getIdeas(1) << std::endl;

	std::cout << "\n-----Cop ideas-----" << std::endl;
	std::cout << "Copy idea 0: " << copy.getBrain()->getIdeas(0) << std::endl;
	std::cout << "Copy idea 1: " << copy.getBrain()->getIdeas(1) << std::endl;
	std::cout << "\n-----Modifying copy-----" << std::endl;
	copy.getBrain()->setIdeas(0, "I am the copy dog!");
	copy.getBrain()->setIdeas(1, "I prefer treats!");

	std::cout << "\n-----After modification-----" << std::endl;
	std::cout << "Original idea 0: " << original.getBrain()->getIdeas(0) << std::endl;
	std::cout << "Copy idea 0: " << copy.getBrain()->getIdeas(0) << std::endl;

	if (original.getBrain() != copy.getBrain())
	{
		std::cout << "Deep copy successful - different Brain objects!" << std::endl;
	}
	else
	{
		std::cout << "Shallow copy detected - same Brain object!" << std::endl;
	}

	std::cout << "\n=====Assigment operator teste =====" << std::endl;
	Cat cat1;
	Cat cat2;

	cat1.getBrain()->setIdeas(0, "Cat's idea");
	cat2 = cat1;

	if (cat1.getBrain() != cat2.getBrain())
	{
		std::cout << "Assignment operator creates deep copy!" << std::endl;
	}
	else
	{
		std::cout << "Assigment operator creates shallow copy!" << std::endl;
	}

	return 0;
}
