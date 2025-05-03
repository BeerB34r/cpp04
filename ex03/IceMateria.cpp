#include <iostream>

#include "IceMateria.hpp"
#include "ICharacter.hpp"

IceMateria::IceMateria() {
	std::clog << "default IceMateria constructor called" << std::endl;
	this->type.append("ice");
}

IceMateria::IceMateria(const IceMateria& other) {
	std::clog << "copy IceMateria constructor called" << std::endl;
	this->type = other.type;
}

IceMateria& IceMateria::operator =(const IceMateria& other) {
	std::clog << "copy IceMateria assignment operator called" << std::endl;
	if (this != &other) this->type = other.type;
	return *this;
}

IceMateria::~IceMateria() {
	std::clog << "default IceMateria destructor called" << std::endl;
}

IceMateria*	IceMateria::clone() const {
	return new IceMateria(*this);
}

void	IceMateria::use(ICharacter& target) {
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
