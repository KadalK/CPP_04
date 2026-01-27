#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP
#include <iostream>
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {
public:
	WrongCat();
	WrongCat(const WrongCat& );
	WrongCat(const std::string& name);
	WrongCat& operator=(const WrongCat&);
	void makeSound() const;

	~WrongCat();
};

#endif