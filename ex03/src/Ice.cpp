#include "AMateria.hpp"

Ice::Ice(){}


Ice::Ice(const Ice& copy){
	this = copy;
}

AMateria* clone() const;

//Ice::Ice& operator=(const Ice& rhs)
//{
//	if (this != rhs)
//	{
//
//	}
//}

void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at* " << target << std::endl;
}
Ice~Ice()
