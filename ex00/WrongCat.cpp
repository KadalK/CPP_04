#include "WrongCat.hpp"
#include "WrongAnimal.hpp"


WrongCat::WrongCat() : WrongAnimal("WrongCat") {
	std::cout << "Constructor WrongCat Called" << std::endl;
}

WrongCat::WrongCat(const WrongCat& obj) {
	this->_type = "WrongCat";
	this->_type = obj._type;
}

WrongCat::WrongCat(const std::string& name) : WrongAnimal(name) {}

WrongCat& WrongCat::operator=(const WrongCat rhs){
	if (this != &rhs)
		this->_type = rhs._type;
	return *this;
}

void WrongCat::makeSound() const {
	std::cout << "Wrong cat song" << std::endl;
}

WrongCat::~WrongCat() {
	std::cout << "Destructor WrongCat Called" << std::endl;
}
