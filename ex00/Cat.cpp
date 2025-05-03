#include <iostream>

#include "Cat.hpp"

Cat::Cat() {
	std::clog << "default Cat constructor called" << std::endl;
	setType("Cat");
}

Cat::Cat(const Cat& other) {
	std::clog << "copy Cat construct called" << std::endl;
	setType(other.getType());
}

Cat& Cat::operator =(const Cat& other) {
	std::clog << "copy Cat assignment operator called" << std::endl;
	if (this != &other) setType(other.getType());
	return *this;
}

Cat::~Cat() {
	std::clog << "default Cat destructor called" << std::endl;
}

void	Cat::makeSound()  { std::cout << "meow" << std::endl; }
