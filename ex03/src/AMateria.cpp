#include "AMateria.hpp"
#include "IMateria.hpp"

AMateria::AMateria() {};

AMateria::AMateria(const AMateria &copy)  : _type(copy._type) {}

AMateria::AMateria(std::string const& type) : _type(type) {}

AMateria&	AMateria::operator=(const AMateria &rhs)
{
	if (this != &rhs)
		this->_type = rhs._type;
	return (*this);
}


std::string const&	AMateria::getType() const {
	return (this->_type);
}

void AMateria::use(ICharacter& target)
{
	(void)target;
}

AMateria::~AMateria() {};