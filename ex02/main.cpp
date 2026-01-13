#include "AAnimal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "WrongDog.hpp"

int main()
{
	const AAnimal* i = new Cat();
	const AAnimal* j = new Dog();
	const WrongAnimal* wi = new WrongCat();
	const WrongAnimal* wj = new WrongDog();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound();
	j->makeSound();
	wi->makeSound();
	wj->makeSound();
	return 0;
}