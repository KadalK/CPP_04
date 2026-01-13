#include "AMateria.hpp"

AMateria::AMateria() {}

AMateria::AMateria(const AMateria& copy)
{
	this = copy;
}

AMateria&	operator=(const AMateria &rhs)
{
	if (this != &rhs)
		this = &rhs;
	return (*this)
}

//std::string	getAMateria() const
//{
//
//}

//void		setAMateria(AMateria)
//{
//	this
//}

AMateria::~AMateria();