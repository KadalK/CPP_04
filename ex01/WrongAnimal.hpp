#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP
#include <iostream>

class WrongAnimal {
protected:
	std::string _name;
public:
	WrongAnimal();
	WrongAnimal(const WrongAnimal& );
	WrongAnimal(std::string name);
	WrongAnimal& operator=(const WrongAnimal);
	virtual ~WrongAnimal();

	virtual void makeSound() const;
};

#endif