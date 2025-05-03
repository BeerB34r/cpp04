#include <iostream>
#include <string>

#include "MateriaSource.hpp"
#include "AMateria.hpp"

MateriaSource::MateriaSource() {
	std::clog << "default MateriaSource constructor called" << std::endl;
}

MateriaSource::MateriaSource(const MateriaSource& other) {
	std::clog << "copy MateriaSource constructor called" << std::endl;
	for (int i = 0; i < 4; i++) memory[i] = other.memory[i];
}

MateriaSource&	MateriaSource::operator =(const MateriaSource& other) {
	std::clog << "copy MateriaSource assignment operator called" << std::endl;
	if (this != &other) for (int i = 0; i < 4; i++) {
		if (memory[i]) delete memory[i];
		memory[i] = other.memory[i];
	}
	return *this;
}
MateriaSource::~MateriaSource() {
	std::clog << "default MateriaSource destructor called" << std::endl;
	for (int i = 0; i < 4; i++) if (memory[i]) delete memory[i];
}

void	MateriaSource::learnMateria(AMateria* materia) {
	for (int i = 0; i < 4; i++) {
		if (memory[i]) continue;
		memory[i] = materia;
		return ;
	}
}

AMateria*	MateriaSource::createMateria(const std::string& type) {
	for (int i = 0; i < 4; i++) {
		if (memory[i] && !memory[i]->getType().compare(type))
			return memory[i]->clone();
	}

	return 0;
}
