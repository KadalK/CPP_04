#include "../inc/ICharactere.hpp"

ICharactere::ICharactere() {}

ICharactere::ICharactere(const ICharactere& copy)
{
	this = copy;
}

ICharactere&	operator=(const ICharactere &rhs)
{
	if (this != &rhs)
		this = &rhs;
	return (*this)
}

//std::string	getICharactere() const
//{
//
//}

//void		setICharactere(ICharactere)
//{
//	this
//}

ICharactere::~ICharactere();