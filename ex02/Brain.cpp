#include <iostream>

#include "Brain.hpp"

Brain::Brain() {
	std::clog << "default Brain constructor called" << std::endl;
}

Brain::Brain(const Brain& other) {
	std::clog << "copy Brain constructor called" << std::endl;
	for (int i = 0; i < 100; i++) {
		this->ideas[i].clear();
		this->ideas[i].append(other.ideas[i]);
	}
}

Brain& Brain::operator =(const Brain& other) {
	std::clog << "copy Brain assignment operator called" << std::endl;
	if (this == &other) return *this;

	for (int i = 0; i < 100; i++) {
		this->ideas[i].clear();
		this->ideas[i].append(other.ideas[i]);
	}
	return *this;
}

Brain::~Brain() {
	std::clog << "default Brain destructor called" << std::endl;
}

void	Brain::think(const std::string& thought) {
	std::string temp = thought;

	for (int i = 0; i < 100; i++) std::swap(temp, ideas[i]); 
}

const std::string&	Brain::readMind(unsigned int i) const { return this->ideas[i]; }
