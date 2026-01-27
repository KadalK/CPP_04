#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	const WrongAnimal* wrong = new WrongAnimal();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	wrong->makeSound();
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
	delete i;
	delete j;
	delete meta;
	delete wrong;

	std::cout << "\n=================Optional Test=================" << std::endl;
	Dog* truc = new Dog;
	truc->setBrain(1, "I wanna poop");
	truc->setBrain(2, "I wanna eat");
	truc->setBrain(3, "I wanna eat my poop");
	std::cout << "Idea #1 of truc at adress :" << static_cast<void *>(const_cast<char *>(truc->getBrain(1).data())) << std::endl;
	std::cout << "Idea #1 " << truc->getBrain(1) << std::endl;
	std::cout << "Idea #2 " << truc->getBrain(2) << std::endl ;
	std::cout << "Idea #3 " << truc->getBrain(3) << std::endl ;

	std::cout << "\n==============================================" << std::endl;
	Dog *machin = new Dog(*truc);
	std::cout << "Idea #1 of machin at adress :" << static_cast<void *>(const_cast<char *>(machin->getBrain(1).data())) << std::endl;
	std::cout << "Idea #1 " << machin->getBrain(1) << std::endl;
	std::cout << "Idea #2 " << machin->getBrain(2) << std::endl;
	std::cout << "Idea #3 " << machin->getBrain(3) << std::endl;



	delete truc;
	delete machin;
	return 0;
}