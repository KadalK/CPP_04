#ifndef CAT_HPP
#define CAT_HPP
#include <iostream>
#include "Animal.hpp"

class Cat : public Animal {
public:
	Cat();
	Cat(const Cat& );
	Cat(std::string name);
	Cat& operator=(const Cat);
	~Cat();
	void makeSound() const;
};

#endif