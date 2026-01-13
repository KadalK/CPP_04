#include "WrongDog.hpp"

WrongDog::WrongDog() : WrongAnimal(){
	this->_name= "WrongDog";
	std::cout << "Constructor WrongDog Called" << std::endl;
}

WrongDog::WrongDog(std::string name) : WrongAnimal(name) {}

WrongDog::WrongDog(const WrongDog& obj) {
	this->_name = "WrongDog";
	this->_name = obj._name;
}

WrongDog& WrongDog::operator=(const WrongDog rhs){
	if (this != &rhs)
		this->_name= rhs._name;
	return *this;
}

void WrongDog::makeSound() const {
	std::cout << "Woof~ Snoop Doogy Doug" << std::endl;
}

WrongDog::~WrongDog() {
	std::cout << "Destructor WrongDog Called" << std::endl;
}