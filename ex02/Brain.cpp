#include "Brain.hpp"
#include "AAnimal.hpp"

Brain::Brain() {}

Brain::Brain(const Brain& obj){
	*this = obj;
}

Brain& Brain::operator=(const Brain& rhs) {
	if (this != &rhs)
	{
		for (int i = 0; i < 100; i++)
			this->_ideas[i] = rhs._ideas[i];
	}
	return(*this);
}


Brain::~Brain() {}