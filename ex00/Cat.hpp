#ifndef CAT_HPP
#define CAT_HPP
#include <iostream>
#include "Animal.hpp"

class Cat : public Animal {
public:
	Cat();
	Cat(const Cat& );
	Cat(const std::string& name);
	Cat& operator=(const Cat&);

	void makeSound() const;

	~Cat();
};

#endif