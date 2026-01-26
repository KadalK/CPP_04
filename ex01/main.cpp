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

	Dog* truc = new Dog;
	truc->setBrain(1, "I wanna poop");
	truc->setBrain(2, "I wanna eat");
	truc->setBrain(3, "I wanna eat my poop");
	std::cout << static_cast<void *>(const_cast<char *>(truc->getBrain(1).data())) << std::endl;
	std::cout << truc->getBrain(1) << std::endl;
	std::cout << truc->getBrain(2) << std::endl ;
	std::cout << truc->getBrain(3) << std::endl ;

	Dog *machin = new Dog(*truc);
	std::cout << static_cast<void *>(const_cast<char *>(machin->getBrain(1).data())) << std::endl;
	std::cout << machin->getBrain(1) << std::endl;
	std::cout << machin->getBrain(2) << std::endl;
	std::cout << machin->getBrain(3) << std::endl;



	delete truc;
	delete machin;
	return 0;
}