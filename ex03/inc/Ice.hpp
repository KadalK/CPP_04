#ifdef ICE_HPP
#define ICE_HPP
#include "AMateria.hpp"

class Ice : public AMateria {
private:

public:
	Ice();
	Ice(const Ice&);
	AMateria* clone() const;
	Ice& operator=(const Ice&);
	void use(ICharacter& target);
	~Ice();
};

#endif
