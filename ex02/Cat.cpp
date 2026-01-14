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
		this->_brain = rhs._brain;
		this->_type = rhs._type;
	}
	return *this;
}

void Cat::makeSound() const {
	std::cout << "Mew~ Snoop Caty Doug" << std::endl;
}

Cat::~Cat() {
	delete this->_brain;
	std::cout << "Destructor Cat Called" << std::endl;
}