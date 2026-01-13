#ifndef AAnimal_HPP
#define AAnimal_HPP
#include <iostream>

class AAnimal {
protected:
	std::string _name;
public:
	AAnimal();
	AAnimal(std::string& name);
	AAnimal(const AAnimal&);
	AAnimal& operator=(const AAnimal&);
	virtual ~AAnimal();
	std::string getType(void) const;
	virtual void makeSound() const = 0;
};


#endif