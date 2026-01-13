#include "Cat.hpp"

Cat::Cat() {
	this->_type = "Cat";
	std::cout << "Constructor Cat Called" << std::endl;
}

Cat::Cat(std::string name) : Animal(name) {}

Cat::Cat(const Cat& obj) {
	this->_type = "Cat";
	this->_type = obj._type;
}

Cat& Cat::operator=(const Cat rhs){
	if (this != &rhs)
		this->_type = rhs._type;
	return *this;
}

void Cat::makeSound() const {
	std::cout << "Mew~ Snoop Caty Doug" << std::endl;
}

Cat::~Cat() {
	std::cout << "Destructor Cat Called" << std::endl;
}