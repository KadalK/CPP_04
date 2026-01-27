#include "MateriaSource.hpp"
#include "Cure.hpp"
#include "Ice.hpp"

MateriaSource::MateriaSource() {
	for(int i = 0 ; i < 4; i++)
		this->_learned[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource& copy){
	*this = copy;
}

MateriaSource& MateriaSource::operator=(const MateriaSource& rhs){
	if (this != &rhs)
	{
		for (int i = 0; i < 4; i++)
		{
			if (this->_learned[i] != NULL)
				delete this->_learned[i];
			this->_learned[i] = rhs._learned[i]->clone();
		}
	}
	return (*this);
}

void MateriaSource::learnMateria(AMateria* learn)
{
	if (!learn)
		return ;

	for (int i = 0; i < 4 ; i++)
	{
		if (this->_learned[i] == NULL)
		{
			_learned[i] = learn;
			std::cout << "U learned " << learn->getType() << std::endl;
			return ;
		}
	}
	std::cout << "U can't learn more !" << std::endl;
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < 4; i++)
	{
		if (_learned[i] != NULL && type == _learned[i]->getType())
			return (_learned[i]->clone());
	}
	return NULL;
}

MateriaSource::~MateriaSource() {
	for (int i = 0; i < 4; i++)
	{
		if (_learned[i] != NULL)
			delete _learned[i];
	}
}