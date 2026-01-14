#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP
#include <iostream>
#include "AAnimal.hpp"

class WrongAnimal {
protected:
	std::string _type;
public:
	WrongAnimal();
	WrongAnimal(const std::string& );
	WrongAnimal(const WrongAnimal& );
	WrongAnimal& operator=(const WrongAnimal& );
	void makeSound() const;
	virtual ~WrongAnimal();
};

#endif