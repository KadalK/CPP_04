#ifndef AMATERIA_HPP
#define AMATERIA_HPP
#include "IMateria.hpp"

class ICharacter;

class AMateria : public IMateria {
protected:
	std::string _type;
public:
	AMateria(std::string const &type);
	AMateria(const AMateria &copy);

	std::string const & getType() const;
	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);
};

#endif