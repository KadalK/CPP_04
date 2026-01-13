#ifndef Animal_HPP
#define Animal_HPP
#include <iostream>

class Animal {
protected:
	std::string _type;
public:
	Animal();
	Animal(const Animal&);
	Animal(std::string name);
	Animal& operator=(const Animal);
	std::string getType(void) const;
	virtual void makeSound() const;
	virtual ~Animal();
};


#endif