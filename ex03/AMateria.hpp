#ifndef AMateria_HPP
#define AMateria_HPP
#include <iostream>

class AMateria {
protected:

public:
	AMateria();
	AMateria(const AMateria&);
//	AMateria(std::string name);

	AMateria&	operator=(const AMateria&);
//	std::string	getAMateria() const;
//	void		setAMateria(AMateria);
	~AMateria();
};