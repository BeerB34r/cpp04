#include "Dog.hpp"
#include <iostream>

Dog::Dog() {
	std::clog << "default Dog constructor called" << std::endl;
	setType("Dog");
}

Dog::Dog(const Dog& other) {
	std::clog << "copy Dog construct called" << std::endl;
	setType(other.getType());
}

Dog& Dog::operator =(const Dog& other) {
	std::clog << "copy Dog assignment operator called" << std::endl;
	if (this != &other) setType(other.getType());
	return *this;
}

Dog::~Dog() {
	std::clog << "default Dog destructor called" << std::endl;
}

void	Dog::makeSound()  { std::cout << "woof" << std::endl; }
