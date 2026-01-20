#include "MateriaSource.hpp"
#include "Cure.hpp"
#include "Ice.hpp"

MateriaSource::MateriaSource() {}

void MateriaSource::learnMateria(AMateria* learn)
{
	std::cout << "Learn" << std::endl;
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	if (type == "Cure")
		return new Cure();
	else if (type == "Ice")
		return new Ice();
	return NULL;
}

MateriaSource::~MateriaSource() {}