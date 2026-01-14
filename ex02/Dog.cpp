#include "Dog.hpp"
#include "AAnimal.hpp"

Dog::Dog() {
	//put brain
	this->_type = "Dog";
	std::cout << "Constructor Dog Called" << std::endl;
}

Dog::Dog(const Dog& obj) {
	this->_brain = new Brain;
	this->_type = "Dog";
	this->_type = obj._type;
}

Dog& Dog::operator=(const Dog& rhs){
	if (this != &rhs)
		this->_type = rhs._type;
	return *this;
}

void Dog::makeSound() const {
	std::cout << "Woof~ Snoop Doogy Doug" << std::endl;
}

Dog::~Dog() {
	//delete brain
	std::cout << "Destructor Dog Called" << std::endl;
}