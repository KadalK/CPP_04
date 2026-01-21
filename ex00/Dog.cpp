#include "Dog.hpp"

Dog::Dog() : Animal("Dog"){;
	std::cout << "Constructor Dog Called" << std::endl;
}

Dog::Dog(const std::string& name) : Animal(name) {}

Dog::Dog(const Dog& obj) {
	this->_type = "Dog";
	this->_type = obj._type;
}

Dog& Dog::operator=(const Dog rhs){
	if (this != &rhs)
		this->_type = rhs._type;
	return *this;
}

void Dog::makeSound() const {
	std::cout << "Woof~ Snoop Doogy Doug" << std::endl;
}

Dog::~Dog() {
	std::cout << "Destructor Dog Called" << std::endl;
}