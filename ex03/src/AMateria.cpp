#include "AMateria.hpp"
#include "IMateria.hpp"

AMateria::AMateria() : IMateria() {}

AMateria::AMateria(const AMateria& copy)
{
	*this = copy;
}

AMateria&	operator=(const AMateria &rhs)
{
	if (this != &rhs)
		this->_type = rhs._type;
	return (*this);
}


std::string const&	AMateria::getAMateria() const
{
	return (this->_type);
}

void AMateria::use(ICharacter& target)
{
	(void)target;
}

AMateria::~AMateria();