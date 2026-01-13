#ifndef ICharactere_HPP
#define ICharactere_HPP
#include <iostream>

class ICharactere {
protected:

public:
	ICharactere();
	ICharactere(const ICharactere&);
//	ICharactere(std::string name);

	ICharactere&	operator=(const ICharactere&);
//	std::string	getICharactere() const = 0;
//	void		setICharactere(ICharactere);
	virtual void equip(AMateria* m) = 0;
	virtual void unequip(int idx) = 0;
	virtual void use(int idx, ICharacter& target) = 0;
	~ICharactere();
};