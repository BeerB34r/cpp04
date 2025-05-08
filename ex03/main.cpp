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
		// imo its the programmers responsibility to make sure allocated memory
		// is handled properly, so there is no safety net for trying to learn
		// excess materia. if you do not take enough care to either 1, make sure
		// that it'll always fit, or 2, save it somewhere else so you can delete
		// it at the end of the programs execution, then that is simply not my
		// problem.
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
	IceMateria*	merch = new IceMateria[8];
	Character*	shopper = new Character("shopper");

	shopper->equip(&merch[0]);
	shopper->equip(&merch[1]);
	shopper->equip(&merch[2]);
	shopper->equip(&merch[3]);
	for (int i = 0; i < 4; i++) shopper->use(i, *shopper);
	for (int i = 0; i < 4; i++) shopper->unequip(i);
	shopper->equip(&merch[4]);
	shopper->equip(&merch[5]);
	shopper->equip(&merch[6]);
	shopper->equip(&merch[7]);
	for (int i = 0; i < 4; i++) shopper->use(i, *shopper);
	for (int i = 0; i < 4; i++) shopper->unequip(i);
	delete shopper;
	delete[] merch;
}

int	main(void) {
	factoryFloor();
	storeFront();
}
