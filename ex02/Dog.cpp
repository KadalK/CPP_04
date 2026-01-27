#include "Dog.hpp"
#include "AAnimal.hpp"

Dog::Dog() : AAnimal("Dog"), _brain(new Brain) {
	std::cout << "Constructor Dog Called" << std::endl;
}

Dog::Dog(const Dog& obj) : AAnimal("Dog"), _brain(new Brain) {
	*this = obj;
}

Dog& Dog::operator=(const Dog& rhs) {
	if (this != &rhs)
	{
		delete this->_brain;
		this->_brain = new Brain(*rhs._brain);
		this->_type =  rhs._type;
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
	delete this->_brain;
}