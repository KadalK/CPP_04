#include "Cat.hpp"
#include "AAnimal.hpp"

Cat::Cat() : AAnimal("Cat") , _brain(new Brain) {
	std::cout << "Constructor Cat Called" << std::endl;
}

Cat::Cat(const Cat& obj) : AAnimal("Cat") , _brain(new Brain) {
	*this = obj;
}

Cat& Cat::operator=(const Cat& rhs){
	if (this != &rhs)
	{
		delete this->_brain;
		this->_brain =  new Brain(*rhs._brain);
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
	delete this->_brain;
}