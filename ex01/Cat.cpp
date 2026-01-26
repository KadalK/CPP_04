#include "Cat.hpp"

Cat::Cat() : Animal("Cat"){
	std::cout << "Constructor Cat Called" << std::endl;
	this->_brain = new Brain();
}

Cat::Cat(const Cat& obj) {
	this->_type = obj._type;
	this->_brain = new Brain(*obj._brain);
}

Cat::Cat(const std::string& name) : Animal(name) {
	this->_brain = new Brain();
}

Cat& Cat::operator=(const Cat rhs){
	if (this != &rhs)
	{
		delete this->_brain;
		this->_brain = new Brain(*rhs._brain);
		this->_type = rhs._type;
	}
	return *this;
}

void Cat::makeSound() const {
	std::cout << "Mew~ Snoop Caty Doug" << std::endl;
}
std::string Cat::getBrain(int idx) const {
	return (this->_brain->getIdeas(idx));
}

void Cat::setBrain(int idx, std::string idea)
{
	this->_brain->setIdeas(idx, idea);
}

Cat::~Cat() {
	std::cout << "Destructor Cat Called" << std::endl;
	if (this->_brain)
		delete this->_brain;
}