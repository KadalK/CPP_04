#include "Animal.hpp"

Animal::Animal() {
	std::cout << "Constructor Animal Called" << std::endl;
}

Animal::Animal(const  Animal& obj) {
	this->_type = obj._type;
}

Animal::Animal(const std::string& name) : _type(name) {
	std::cout << "Parameterized Constructor Animal Called" << std::endl;
}

Animal& Animal::operator=(const Animal& rhs){
	if (this != &rhs)
		this->_type = rhs._type;
	return *this;
}

std::string Animal::getType() const {
	return (this->_type);
}

void Animal::makeSound() const{
	std::cout << "Vous etes des Animals" << std::endl;
}

Animal::~Animal() {
	std::cout << "Destructor Animal Called" << std::endl;
}