#include "Cat.hpp"
#include "AAnimal.hpp"

Cat::Cat() : AAnimal() {
	this->_type = "Cat";
	std::cout << "Constructor Cat Called" << std::endl;
}

Cat::Cat(const std::string& name) : AAnimal("Cat") {}

Cat::Cat(const Cat& obj) {
	this->_brain = new Brain;
	this->_brain = obj._brain;
	this->_type = obj._type;
}

Cat& Cat::operator=(const Cat& rhs){
	if (this != &rhs)
	{
		this->_brain = rhs._brain;
		this->_type = rhs._type;
	}
	return *this;
}

void Cat::makeSound() const {
	std::cout << "Mew~ Snoop Caty Doug" << std::endl;
}

Cat::~Cat() {
	std::cout << "Destructor Cat Called" << std::endl;
}