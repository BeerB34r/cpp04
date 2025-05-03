#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"
#include <iostream>

void	sanityCheck() {
	Animal*			meta = new Animal();
	Animal*			cat = new Cat();
	Animal*			dog = new Dog();
	WrongAnimal*	blackGoatOfTheWoods	= new WrongAnimal();
	WrongAnimal*	abomination = new WrongCat();
	WrongCat*		garfield = new WrongCat();

	std::cout << meta->getType() << std::endl;
	std::cout << cat->getType() << std::endl;
	std::cout << dog->getType() << std::endl;

	meta->makeSound();
	cat->makeSound();
	dog->makeSound();

	std::cout << blackGoatOfTheWoods->getType() << std::endl;
	std::cout << abomination->getType() << std::endl;
	std::cout << garfield->getType() << std::endl;

	blackGoatOfTheWoods->makeSound();
	abomination->makeSound();
	garfield->makeSound();

	delete meta;
	delete cat;
	delete dog;
	delete blackGoatOfTheWoods;
	delete abomination;
	delete garfield;
}

void	copyCheck() {
	Cat	cat;
	Dog	dog;
	Animal*	copycat = new Cat(cat);
	Animal*	copydog = new Dog(dog);

	cat.makeSound();
	dog.makeSound();
	copycat->makeSound();
	copydog->makeSound();
	
	Animal*	copycopycat;

	copycopycat = copycat;
	copycopycat->makeSound();
	delete copycopycat;
	delete copydog;
}

void	brainBlast() {
	Brain pinky;
	Cat	cat;
	Dog	dog;

	pinky.think("im gonna cry");
	std::cout << pinky.readMind(0) << std::endl;
	pinky.think("im gonna piss my pants");
	std::cout << pinky.readMind(0) << std::endl;
	cat.transplantBrain(pinky);
	std::cout << cat.crackSkull().readMind(0) << std::endl;
	dog.transplantBrain(cat.crackSkull());
	std::cout << dog.crackSkull().readMind(0) << std::endl;
}

int	main(void) {
	sanityCheck();
	copyCheck();
	brainBlast();
}
