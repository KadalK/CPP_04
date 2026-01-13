#ifndef AAnimal_HPP
#define AAnimal_HPP
#include <iostream>

class AAnimal {
protected:
	std::string _type;
public:
	AAnimal();
	AAnimal(std::string&);
	AAnimal(const AAnimal&);
	AAnimal& operator=(const AAnimal&);
	virtual ~AAnimal();
	virtual std::string getType(void) const = 0;
	virtual void makeSound() const = 0;
};


#endif