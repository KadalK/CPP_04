#include "Cure.hpp"
#include "AMateria.hpp"


Cure::Cure() : AMateria("cure"){}


Cure::Cure(const Cure& copy) : AMateria("cure") {
	*this = copy;
}

AMateria* Cure::clone() const{
	return new Cure(*this);
}

Cure& Cure::operator=(const Cure& rhs)
{
	if (this != &rhs)
		this->_type = rhs._type;
	return *this;
}

void Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() <<"’s wounds *" << std::endl;
}


Cure::~Cure() {}