#include <iostream>

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() {
	std::clog << "default WrongAnimal constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& other) {
	std::clog << "copy WrongAnimal constructor called" << std::endl;
	setType(other.getType());
}

WrongAnimal& WrongAnimal::operator =(const WrongAnimal& other) {
	std::clog << "copy WrongAnimal assignment operator called" << std::endl;
	if (this != &other) setType(other.getType());
	return *this;
}

WrongAnimal::~WrongAnimal() {
	std::clog << "default WrongAnimal destructor called" << std::endl;
}

const std::string WrongAnimal::getType() const { return this->type; }

void	WrongAnimal::setType(const std::string& type) {
	this->type.clear();
	this->type.append(type);
}

void	WrongAnimal::makeSound() { std::cout << "* horrors beyond our comprehension *" << std::endl; }
