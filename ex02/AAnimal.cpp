#include "AAnimal.hpp"

AAnimal::AAnimal() {
	std::cout << "Constructor AAnimal Called" << std::endl;
}

AAnimal::AAnimal(const std::string& name) : _type(name) {}

AAnimal::AAnimal(const AAnimal& obj) {
	this->_type = obj._type;
}

AAnimal& AAnimal::operator=(const AAnimal& rhs) {
	if (this != &rhs)
		this->_type = rhs._type;
	return (*this);
}

std::string AAnimal::getType() const {
	return (this->_type);
}

AAnimal::~AAnimal() {
	std::cout << "Destructor AAnimal Called" << std::endl;
}