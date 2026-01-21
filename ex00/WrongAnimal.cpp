#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() {
	std::cout << "Constructor WrongAnimal Called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& obj) {
	this->_type = obj._type;
}

WrongAnimal::WrongAnimal(const std::string& name) : _type(name) {
	std::cout << "Parameterized Constructor WrongAnimal Called" << std::endl;

}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& rhs){
	if (this != &rhs)
		this->_type = rhs._type;
	return *this;
}

void WrongAnimal::makeSound() const {
	std::cout << "Salut c'est Franck Leboeuf !" << std::endl;
}

WrongAnimal::~WrongAnimal() {
	std::cout << "Destructor WrongAnimal Called" << std::endl;
}