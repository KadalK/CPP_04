#ifndef CAT_HPP
#define CAT_HPP
#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal {
private:
	Brain* _brain;
public:
	Cat();
	Cat(const Cat& );
	Cat(std::string name);
	Cat& operator=(const Cat);
	~Cat();

	void makeSound() const;
};

#endif