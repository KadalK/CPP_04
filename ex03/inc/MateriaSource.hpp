#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP
#include "IMateriaSource.hpp"
#include "AMateria.hpp"
#include <iostream>

class IMateriaSource;

class MateriaSource : public IMateriaSource {
public:
	MateriaSource();
	void learnMateria(AMateria*);
	AMateria* createMateria(std::string const & type);
	~MateriaSource();
};

#endif