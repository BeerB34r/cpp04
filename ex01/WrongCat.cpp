#include <iostream>

#include "WrongCat.hpp"

WrongCat::WrongCat() {
	std::clog << "default WrongCat constructor called" << std::endl;
	setType("WrongCat");
}

WrongCat::WrongCat(const WrongCat& other) {
	std::clog << "copy WrongCat constructor called" << std::endl;
	setType(other.getType());
}

WrongCat&	WrongCat::operator =(const WrongCat& other) {
	std::clog << "copy WrongCat assignment operator called" << std::endl;
	if (this != &other) setType(other.getType());
	return *this;
}

WrongCat::~WrongCat() {
	std::clog << "default WrongCat destructor called" << std::endl;
}

void	WrongCat::makeSound() { std::cout << "burenyuuuu" << std::endl; }
