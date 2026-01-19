#include "../inc/ICharacter.hpp"

ICharacter::ICharacter() {}

ICharacter::ICharacter(const ICharacter& copy)
{
	this = copy;
}

ICharacter&	operator=(const ICharacter &rhs)
{
	if (this != &rhs)
		this = &rhs;
	return (*this)
}

//std::string	getICharacter() const
//{
//
//}

//void		setICharacter(ICharacter)
//{
//	this
//}

ICharacter::~ICharacter();