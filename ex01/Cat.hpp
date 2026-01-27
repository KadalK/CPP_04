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
	Cat(const std::string& name);
	Cat& operator=(const Cat&);
	void makeSound() const;

	std::string getBrain(int idx) const;
	void setBrain(int idx, std::string idea);

	~Cat();
};

#endif