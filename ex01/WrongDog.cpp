#include "WrongDog.hpp"
#include "WrongAnimal.hpp"

WrongDog::WrongDog() : WrongAnimal("WrongDog") {
	std::cout << "Constructor WrongDog Called" << std::endl;
}


WrongDog::WrongDog(const WrongDog& obj) {
	this->_type = obj._type;
}

WrongDog& WrongDog::operator=(const WrongDog& rhs){
	if (this != &rhs)
		this->_type = rhs._type;
	return *this;
}

void WrongDog::makeSound() const {
	std::cout << "Wrong doge song" << std::endl;
}

WrongDog::~WrongDog() {
	std::cout << "Destructor WrongDog Called" << std::endl;
}