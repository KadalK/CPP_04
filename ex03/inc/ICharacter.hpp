#ifndef ICharacter_HPP
#define ICharacter_HPP
#include "IMateria.hpp"


class AMateria;
class ICharacter {
protected:
//	IMateria _inventory[4];
public:
	ICharacter();
	ICharacter(const ICharacter&);

	ICharacter&	operator=(const ICharacter&);
	virtual void equip(AMateria* m) = 0;
	virtual void unequip(int idx) = 0;
	virtual void use(int idx, ICharacter& target) = 0;
	~ICharacter();
};

#endif