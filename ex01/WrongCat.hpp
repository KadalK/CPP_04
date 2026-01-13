#include "WrongCat.hpp"

WrongCat::WrongCat() {
	this->_type = "WrongCat";
	std::cout << "Constructor WrongCat Called" << std::endl;
}

WrongCat::WrongCat(std::string name) : Animal(name) {}

WrongCat::WrongCat(const WrongCat& obj) {
	this->_type = "WrongCat";
	this->_type = obj._type;
}

WrongCat& WrongCat::operator=(const WrongCat rhs){
	if (this != &rhs)
		this->_type = rhs._type;
	return *this;
}

void WrongCat::makeSound() const {
	std::cout << "Mew~ Snoop WrongCaty Doug" << std::endl;
}

WrongCat::~WrongCat() {
	std::cout << "Destructor Cat Called" << std::endl;
}