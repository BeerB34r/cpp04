#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal {
public:
	Cat();
	Cat(const Cat&);
	Cat& operator =(const Cat&);
	~Cat();

	void	makeSound() override;
	void	transplantBrain(const Brain&);
	const Brain&	crackSkull();
private:
	Brain*	brain;
};

#endif // CAT_HPP
