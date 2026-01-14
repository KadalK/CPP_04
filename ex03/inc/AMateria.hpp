#ifndef AMateria_HPP
#define AMateria_HPP
#include <iostream>
#include "IMateria.hpp"

class AMateria : public IMateria { // a verifier public
protected:
	std::string _type;
public:
	AMateria(std::string const &type);

	std::string const & getType() const;
	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);
};

#endif