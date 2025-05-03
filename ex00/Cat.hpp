#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal {
public:
	Cat();
	Cat(const Cat&);
	Cat& operator =(const Cat&);
	~Cat();

	void makeSound() override;
};

#endif // CAT_HPP
