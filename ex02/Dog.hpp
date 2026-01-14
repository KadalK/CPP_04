#ifndef DOG_HPP
#define DOG_HPP
#include <iostream>
#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog : public AAnimal {
private:
	Brain* _brain;
public:
	Dog();
	Dog(const Dog& );
	Dog(std::string& name);
	Dog& operator=(const Dog&);
	void makeSound() const;
	~Dog();
};

#endif