#include "Dog.hpp"
#include "AAnimal.hpp"

Dog::Dog() : AAnimal("Dog"), _brain(new Brain) {
	std::cout << "Constructor Dog Called" << std::endl;
}

Dog::Dog(const Dog& obj) : AAnimal("Dog"), _brain(new Brain) {
	*this = obj;
}

Dog& Dog::operator=(const Dog& rhs){
	if (this != &rhs)
	{
		this->_brain = rhs._brain;
		this->_type = rhs._type;
	}
	return *this;
}

void Dog::makeSound() const {
	std::cout << "Woof~ Snoop Doogy Doug" << std::endl;
}

Dog::~Dog() {
	delete this->_brain;
	std::cout << "Destructor Dog Called" << std::endl;
}