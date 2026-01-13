#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP
#include <iostream>
#include "Animal.hpp"

class WrongAnimal : public Animal {
protected:
	std::string _type;
public:
	WrongAnimal();
	WrongAnimal(const WrongAnimal& );
	WrongAnimal(std::string name);
	WrongAnimal& operator=(const WrongAnimal);
	virtual ~WrongAnimal();

	virtual void makeSound() const;
};

#endif