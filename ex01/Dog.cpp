#include "Dog.hpp"

Dog::Dog() : Animal("Dog") {
	std::cout << "Constructor Dog Called" << std::endl;
	this->_brain = new Brain();
}

Dog::Dog(const Dog& obj) {
	this->_type = obj._type;
	this->_brain = new Brain(*obj._brain);
}

Dog::Dog(const std::string& name) : Animal(name) {
	this->_brain = new Brain();
}

Dog& Dog::operator=(const Dog& rhs){
	if (this != &rhs)
	{
		delete this->_brain;
		this->_brain = new Brain(*rhs._brain);
		this->_type = rhs._type;
	}
	return *this;
}

void Dog::makeSound() const {
	std::cout << "Woof~ Snoop Doogy Doug" << std::endl;
}

std::string Dog::getBrain(int idx) const {
	return (this->_brain->getIdeas(idx));
}

void Dog::setBrain(int idx, std::string idea) {
	this->_brain->setIdeas(idx, idea);
}

Dog::~Dog() {
	std::cout << "Destructor Dog Called" << std::endl;
	if (this->_brain)
		delete this->_brain;
}