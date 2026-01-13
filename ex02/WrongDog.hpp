#ifndef WRONGDOG_HPP
#define WRONGDOG_HPP
#include <iostream>
#include "WrongAnimal.hpp"

class WrongDog : public WrongAnimal {
public:
	WrongDog();
	WrongDog(const WrongDog& );
	WrongDog(std::string name);
	WrongDog& operator=(const WrongDog);
	~WrongDog();
	void makeSound() const;
};

#endif