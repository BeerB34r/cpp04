#include <iostream>

#include "Character.hpp"
#include "AMateria.hpp"

Character::Character() {
	std::clog << "default Character constructor called" << std::endl;
}

Character::Character(const std::string& name) {
	std::clog << "string-parameter Character constructor called" << std::endl;
	this->name = name;
}

Character::Character(const Character& other) {
	std::clog << "copy Character constructor called" << std::endl;
	this->name = other.name;
	for (int i = 0; i < 4; i++) {
		if (inventory[i]) delete inventory[i];
		inventory[i] = other.inventory[i];
	}
}

Character&	Character::operator =(const Character& other) {
	std::clog << "copy Character assignment operator called" << std::endl;
	if (this != &other) {
		this->name = other.name;
		for (int i = 0; i < 4; i++) {
			if (inventory[i]) delete inventory[i];
			inventory[i] = other.inventory[i];
		}
	}
	return *this;
}

Character::~Character() {
	std::clog << "default Character destructor called" << std::endl;
	for (int i = 0; i < 4; i++) if (inventory[i]) delete inventory[i];
}

void	Character::equip(AMateria* materia) {
	if (!materia) return ;
	for (int i = 0; i < 4; i++) {
		if (inventory[i]) continue;
		inventory[i] = materia;
		return ;
	}
}

const std::string&	Character::getName() const { return this->name; }
void	Character::unequip(int idx) { inventory[idx] = 0; }
void	Character::use(int idx, ICharacter& target) { inventory[idx]->use(target); }

