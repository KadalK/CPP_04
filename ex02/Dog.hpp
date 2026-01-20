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
	Dog& operator=(const Dog&);
	void makeSound() const;
	Brain* getBrain() const { return _brain; }
	~Dog();
};

#endif