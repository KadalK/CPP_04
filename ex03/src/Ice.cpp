#include "AMateria.hpp"
#include "Ice.hpp"

Ice::Ice() : AMateria("ice") {}


Ice::Ice(const Ice& copy) : AMateria("ice") {
	*this = copy;
}

AMateria* Ice::clone() const{
	return new Ice(*this);
}

Ice& Ice::operator=(const Ice& rhs)
{
	if (this != &rhs)
	{
		this->_type = rhs._type;
	}
	return *this;
}

void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

Ice::~Ice() {}
