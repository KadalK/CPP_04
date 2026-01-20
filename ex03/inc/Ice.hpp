#ifndef ICE_HPP
#define ICE_HPP
#include "AMateria.hpp"
#include "ICharacter.hpp"


class Ice : public AMateria {
private:
	std::string _type;
public:
	Ice();
	Ice(const Ice&);
	AMateria* clone() const;
	Ice& operator=(const Ice&);
	void use(ICharacter& target);
	~Ice();
};

#endif
