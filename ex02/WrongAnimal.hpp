#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP
#include <iostream>
#include "AAnimal.hpp"

class WrongAnimal {
protected:
	std::string _name;
public:
	WrongAnimal();
	WrongAnimal(std::string& name);
	WrongAnimal(const WrongAnimal& );
	WrongAnimal& operator=(const WrongAnimal&);
	virtual ~WrongAnimal();
	virtual void makeSound() const;
};

#endif