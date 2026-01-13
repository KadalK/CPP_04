#include "WrongCat.hpp"
#include "WrongAnimal.hpp"


WrongCat::WrongCat() {
	this->_type = "WrongCat";
	std::cout << "Constructor WrongCat Called" << std::endl;
}

WrongCat::WrongCat(std::string name) : WrongAnimal(name) {}

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
	std::cout << "I WILL DESTROY UR WORLD." << std::endl;
}

WrongCat::~WrongCat() {
	std::cout << "Destructor Cat Called" << std::endl;
}
