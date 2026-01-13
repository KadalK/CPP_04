#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() {
	std::cout << "Constructor WrongAnimal Called" << std::endl;
}

WrongAnimal::WrongAnimal(std::string& name) : _name(name) {}

WrongAnimal::WrongAnimal(const WrongAnimal& obj) {
	this->_name = obj._name;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& rhs){
	if (this != &rhs)
		this->_name = rhs._name;
	return *this;
}

void WrongAnimal::makeSound() const {
	std::cout << "Salut c'est Franck Leboeuf !" << std::endl;
}

WrongAnimal::~WrongAnimal() {
	std::cout << "Destructor WrongAnimal Called" << std::endl;
}