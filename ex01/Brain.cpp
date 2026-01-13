#include "Brain.hpp"

Brain::Brain() {}

Brain::Brain(const Brain& obj){
	this->_ideas[99] = obj._ideas[99];
}

Brain Brain::operator=(const Brain rhs) {
	if (this != &rhs)
		this->_ideas[99] = rhs._ideas[99];
	return(*this);
}

Brain::~Brain() {}