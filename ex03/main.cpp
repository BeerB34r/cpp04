#include "CureMateria.hpp"
#include "IceMateria.hpp"
#include "MateriaSource.hpp"

#include "Character.hpp"

void	factoryFloor() {
	MateriaSource	assemblyLine;

	assemblyLine.learnMateria(new CureMateria);
	assemblyLine.learnMateria(new IceMateria);
	assemblyLine.learnMateria(new IceMateria);
	assemblyLine.learnMateria(new IceMateria);
	{
		IceMateria*		deathRow = new IceMateria;
		assemblyLine.learnMateria(deathRow);
		delete deathRow;
	}

	Character*	hero = new Character("Hero");
	Character*	sidekick = new Character("Sidekick");

	hero->equip(assemblyLine.createMateria("ice"));
	hero->equip(assemblyLine.createMateria("ice"));
	hero->equip(assemblyLine.createMateria("fire"));
	hero->equip(assemblyLine.createMateria("ice"));
	hero->equip(assemblyLine.createMateria("ice"));
	sidekick->equip(assemblyLine.createMateria("cure"));
	sidekick->equip(assemblyLine.createMateria("cure"));
	sidekick->equip(assemblyLine.createMateria("cure"));
	sidekick->equip(assemblyLine.createMateria("booze"));
	sidekick->equip(assemblyLine.createMateria("cure"));
	{
		IceMateria*	excessFirepower = new IceMateria;
		CureMateria*	excessSupplies = new CureMateria;

		sidekick->equip(excessFirepower);
		hero->equip(excessSupplies);
		delete excessFirepower;
		delete excessSupplies;
	}
	{
		Character	villain("Villain");

		hero->use(0, villain);
		hero->use(1, villain);
		hero->use(2, villain);
		hero->use(3, villain);
		sidekick->use(0, *hero);
		sidekick->use(1, *hero);
		sidekick->use(2, *hero);
		sidekick->use(3, *hero);
	}
	delete hero;
	delete sidekick;
}

void	storeFront() {
	IceMateria*	merch1 = new IceMateria;
	IceMateria*	merch2 = new IceMateria;
	IceMateria*	merch3 = new IceMateria;
	IceMateria*	merch4 = new IceMateria;
	IceMateria*	merch5 = new IceMateria;
	IceMateria*	merch6 = new IceMateria;
	IceMateria*	merch7 = new IceMateria;
	IceMateria*	merch8 = new IceMateria;
	Character*	shopper = new Character("shopper");

	shopper->equip(merch1);
	shopper->equip(merch2);
	shopper->equip(merch3);
	shopper->equip(merch4);
	for (int i = 0; i < 4; i++) shopper->use(i, *shopper);
	for (int i = 0; i < 4; i++) shopper->unequip(i);
	shopper->equip(merch5);
	shopper->equip(merch6);
	shopper->equip(merch7);
	shopper->equip(merch8);
	for (int i = 0; i < 4; i++) shopper->use(i, *shopper);
	for (int i = 0; i < 4; i++) shopper->unequip(i);
	delete shopper;
	delete merch1;
	delete merch2;
	delete merch3;
	delete merch4;
	delete merch5;
	delete merch6;
	delete merch7;
	delete merch8;
}

int	main(void) {
	factoryFloor();
	storeFront();
}
