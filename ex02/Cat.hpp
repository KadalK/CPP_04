#ifndef CAT_HPP
#define CAT_HPP
#include <iostream>
#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat : public AAnimal {
private:
	Brain* _brain;
public:
	Cat();
	Cat(const Cat&);
	Cat& operator=(const Cat&);
	void makeSound() const;
	~Cat();
};

#endif