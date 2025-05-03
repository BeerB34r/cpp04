#include <iostream>

#include "IMateriaSource.hpp"

IMateriaSource::IMateriaSource() {
	std::clog << "default IMateriaSource constructor called" << std::endl;
}

IMateriaSource::IMateriaSource(const IMateriaSource& other) {
	std::clog << "copy IMateriaSource constructor called" << std::endl;
	(void)other;
}

IMateriaSource&	IMateriaSource::operator =(const IMateriaSource&) {
	std::clog << "copy IMateriaSource assignment operator called" << std::endl;
	return *this;
}

IMateriaSource::~IMateriaSource() {
	std::clog << "default IMateriaSource destructor called" << std::endl;
}
