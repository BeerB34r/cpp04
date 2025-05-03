#include <iostream>

#include "ICharacter.hpp"

ICharacter::ICharacter() {
	std::clog << "default ICharacter constructor called" << std::endl;
}

ICharacter::ICharacter(const std::string& name) {
	std::clog << "string-parameter ICharacter constructor called" << std::endl;
	this->name = name;
}

ICharacter::ICharacter(const ICharacter& other) {
	std::clog << "copy ICharacter constructor called" << std::endl;
	this->name = other.name;
}

ICharacter&	ICharacter::operator =(const ICharacter& other) {
	std::clog << "copy ICharacter assignment operator called" << std::endl;
	if (this != &other) this->name = other.name;
	return *this;
}

ICharacter::~ICharacter() {
	std::clog << "default ICharacter destructor called" << std::endl;
}
