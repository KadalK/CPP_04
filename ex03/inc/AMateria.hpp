#ifndef AMATERIA_HPP
#define AMATERIA_HPP
#include "IMateria.hpp"

class ICharacter;

class AMateria : public IMateria {
protected:
	std::string _type;
public:
	AMateria();
	AMateria(std::string const &type);
	AMateria(const AMateria &copy);

	std::string const & getType() const;
	AMateria&	operator=(const AMateria&);
	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);
	virtual ~AMateria();
};


#endif