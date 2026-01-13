#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP
#include <iostream>
#include "AAnimal.hpp"

class WrongAnimal : public AAnimal {
private:
	std::string _name;
public:
	WrongAnimal();
	WrongAnimal(std::string& name);
	WrongAnimal(const WrongAnimal& );
	WrongAnimal& operator=(const WrongAnimal&);
	~WrongAnimal();
	virtual void makeSound() const = 0;
};

#endif