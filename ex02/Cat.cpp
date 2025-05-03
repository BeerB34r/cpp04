#include <iostream>

#include "Cat.hpp"

Cat::Cat() {
	std::clog << "default Cat constructor called" << std::endl;
	setType("Cat");
	this->brain = new Brain;
}

Cat::Cat(const Cat& other) {
	std::clog << "copy Cat construct called" << std::endl;
	setType(other.getType());
	this->brain = new Brain(*other.brain);
}

Cat& Cat::operator =(const Cat& other) {
	std::clog << "copy Cat assignment operator called" << std::endl;
	if (this != &other) {
		setType(other.getType());
		this->brain = new Brain(*other.brain);
	}
	return *this;
}

Cat::~Cat() {
	std::clog << "default Cat destructor called" << std::endl;
	delete brain;
}

void	Cat::makeSound()  { std::cout << "meow" << std::endl; }

void	Cat::transplantBrain(const Brain& other) {
	delete this->brain;
	this->brain = new Brain(other);
}

const Brain&	Cat::crackSkull() {
	return *this->brain;
}
