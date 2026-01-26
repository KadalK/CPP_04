#include "Brain.hpp"

Brain::Brain() {}

Brain::Brain(const Brain& obj){
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = obj._ideas[i];
}

Brain Brain::operator=(const Brain rhs) {
	if (this != &rhs)
	{
		for (int i = 0; i < 100; i++)
			this->_ideas[i] = rhs._ideas[i];
	}
	return(*this);
}

const std::string Brain::getIdeas(int idx) const{
	return(this->_ideas[idx]);
}

void Brain::setIdeas(int idx, std::string idea) {
	this->_ideas[idx] = idea;
}




Brain::~Brain() {}