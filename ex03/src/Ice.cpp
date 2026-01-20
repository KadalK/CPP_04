#include "AMateria.hpp"
#include "Ice.hpp"

Ice::Ice() : AMateria("Ice") {}


Ice::Ice(const Ice& copy) : AMateria("Ice") {
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
	std::cout << "* shoots an ice bolt at* " << target.getName() << std::endl;
}
Ice::~Ice() {}
