#ifndef IMateria_HPP
#define IMateria_HPP
#include <iostream>

class IMateria {
public:
	virtual IMateria* clone() const = 0;
	virtual ~IMateria() {};
};

#endif