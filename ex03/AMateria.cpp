#include <iostream>

#include "AMateria.hpp"

AMateria::AMateria() {
	std::clog << "default AMateria constructor called" << std::endl;
}

AMateria::AMateria(const std::string& type) {
	std::clog << "string-parameter AMateria constructor called" << std::endl;
	this->type = type;
}

AMateria::AMateria(const AMateria& other) {
	std::clog << "copy AMateria constructor called" << std::endl;
	this->type = other.getType();
}

AMateria& AMateria::operator =(const AMateria& other) {
	std::clog << "copy AMateria assignment operator called" << std::endl;
	if (this != &other) this->type = other.getType();
	return *this;
}

AMateria::~AMateria() {
	std::clog << "default AMateria destructor called" << std::endl;
}

const std::string&	AMateria::getType() const { return this->type; }
