#include "MateriaSource.hpp"
#include "Cure.hpp"
#include "Ice.hpp"

MateriaSource::MateriaSource() {
	for(int i = 0 ; i < 4; i++)
		this->_learned[i] = NULL;
}

void MateriaSource::learnMateria(AMateria* learn)
{
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