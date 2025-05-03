#include <iostream>

#include "CureMateria.hpp"
#include "ICharacter.hpp"

CureMateria::CureMateria() {
	std::clog << "default CureMateria constructor called" << std::endl;
	this->type.append("cure");
}

CureMateria::CureMateria(const CureMateria& other) {
	std::clog << "copy CureMateria constructor called" << std::endl;
	this->type = other.type;
}

CureMateria& CureMateria::operator =(const CureMateria& other) {
	std::clog << "copy CureMateria assignment operator called" << std::endl;
	if (this != &other) this->type = other.type;
	return *this;
}

CureMateria::~CureMateria() {
	std::clog << "default CureMateria destructor called" << std::endl;
}

CureMateria*	CureMateria::clone() const {
	return new CureMateria(*this);
}

void	CureMateria::use(ICharacter& target) {
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
