#ifndef DOG_HPP
#define DOG_HPP
#include <iostream>
#include "Animal.hpp"

class Dog : public Animal {
public:
	Dog();
	Dog(const Dog& );
	Dog(std::string name);
	Dog& operator=(const Dog);
	~Dog();
	void makeSound() const;
};

#endif