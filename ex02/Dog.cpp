#include "Dog.hpp"
#include <iostream>

Dog::Dog() {
	std::clog << "default Dog constructor called" << std::endl;
	setType("Dog");
	this->brain = new Brain;
}

Dog::Dog(const Dog& other) {
	std::clog << "copy Dog construct called" << std::endl;
	setType(other.getType());
	this->brain = new Brain(*other.brain);
}

Dog& Dog::operator =(const Dog& other) {
	std::clog << "copy Dog assignment operator called" << std::endl;
	if (this != &other) {
		setType(other.getType());
		this->brain = new Brain(*other.brain);
	}
	return *this;
}

Dog::~Dog() {
	std::clog << "default Dog destructor called" << std::endl;
	delete brain;
}

void	Dog::makeSound()  { std::cout << "woof" << std::endl; }

void	Dog::transplantBrain(const Brain& other) {
	delete this->brain;
	this->brain = new Brain(other);
}

const Brain&	Dog::crackSkull() {
	return *this->brain;
}
