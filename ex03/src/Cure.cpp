#include "Cure.hpp"
#include "AMateria.hpp"


Cure::Cure() : AMateria("Cure"){}


Cure::Cure(const Cure& copy) : {
}

AMateria* Cure::clone() const;

Cure& Cure::operator=(const Cure& rhs)
{
	if (this != rhs)
	{

	}
}

void Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getType() <<"’s wounds *" << std::endl;
}
Cure::~Cure() {}