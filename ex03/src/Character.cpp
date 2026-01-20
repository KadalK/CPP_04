#include "Character.hpp"
#include "AMateria.hpp"
#include <cstddef>


Character::Character() {}

Character::Character(const std::string& name) : _name(name) {}

Character::Character(const Character& copy) {
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = copy._inventory[i];
}

std::string const & Character::getName() const{
	return(this->_name);
}

Character& Character::operator=(const Character& rhs) {
	if (this != &rhs)
	{
		for (int i = 0; i < 4; i++)
		{
			this->_inventory[i] = rhs._inventory[i];
			this->_name = rhs._name;
		}
	}
	return *this;
}

void Character::equip(AMateria* m){

	if (!m)
		return ;

	for (int i = 0; i < 4; i++)
	{
		if (_inventory[i] != NULL) //check
		{
			_inventory[i] = m;
			std::cout << "Materia equip in slot " << i << std::endl;
		}
	}
	std::cout << "No more slot dispo !" << std::endl;
	return ;
}

void Character::unequip(int idx)
{
	_inventory[idx] = NULL;
	std::cout << "Materia unequip the slot " << idx << std::endl;
}

void Character::use(int idx, ICharacter& target)
{
	(void)idx;
	(void)target;
	std::cout << "use" << std::endl;
}

Character::~Character() {
	for(int i = 0; i < 4; i++)
		delete _inventory[i];
}