#include "AAnimal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "WrongDog.hpp"

int main()
{
	std::cout << "\n=================Subject Test=================" << std::endl;
	const AAnimal* i = new Cat();
	const AAnimal* j = new Dog();
	const WrongAnimal* wi = new WrongCat();
	const WrongAnimal* wj = new WrongDog();
	std::cout << i->getType() << " " << std::endl;
	std::cout << j->getType() << " " << std::endl;
	i->makeSound();
	j->makeSound();
	wi->makeSound();
	wj->makeSound();
	delete i;
	delete j;
	delete wi;
	delete wj;

	std::cout << "\n=================Mendatory Test=================" << std::endl;
	AAnimal* array[10];
	for (int i = 0; i < 10; i++)
	{
		if (i < 5)
			array[i] = new Cat();
		else
			array[i] = new Dog();
	}

	std::cout << std::endl;
	for (int i = 0; i < 10; i++)
		delete array[i];

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