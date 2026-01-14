#ifndef AAnimal_HPP
#define AAnimal_HPP
#include <iostream>

class AAnimal {
protected:
	std::string _type;
public:
	AAnimal();
	AAnimal(const std::string&);
	AAnimal(const AAnimal&);
	AAnimal& operator=(const AAnimal&);
	std::string getType(void) const;
	virtual void makeSound() const = 0;
	virtual ~AAnimal();
};


#endif