#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal {
public:
	Dog();
	Dog(const Dog&);
	Dog& operator =(const Dog&);
	~Dog();

	void	makeSound() override;
	void	transplantBrain(const Brain&);
	const Brain&	crackSkull();
private:
	Brain*	brain;
};

#endif // DOG_HPP
