#ifndef DOG_HPP
#define DOG_HPP
#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal {
private:
	Brain* _brain;
public:
	Dog();
	Dog(const Dog& );
	Dog(const std::string& name);
	Dog& operator=(const Dog&);
	void makeSound() const;

	std::string getBrain(int idx) const;
	void setBrain(int idx, std::string idea);

	~Dog();
};

#endif