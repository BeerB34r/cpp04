#include <iostream>

#include "Animal.hpp"

Animal::Animal() {
	std::clog << "default Animal constructor called" << std::endl;
}

Animal::Animal(const Animal& other) {
	std::clog << "copy Animal constructor called" << std::endl;
	setType(other.getType());
}

Animal&	Animal::operator =(const Animal& other) {
	std::clog << "copy Animal assignment called" << std::endl;
	if (this != &other) setType(other.getType());
	return *this;
}

Animal::~Animal() {
	std::clog << "default Animal destructor called" << std::endl;
}

const std::string Animal::getType() const { return this->type; }

void	Animal::setType(const std::string& type) {
	this->type.clear();
	this->type.append(type);
}

void	Animal::makeSound() { std::cout << "* the animal is having an existential crisis *" << std::endl; }
