#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <string>

class	Animal {
public:
	Animal();
	Animal(const Animal&);
	Animal& operator =(const Animal&);
	virtual ~Animal();

	virtual void	makeSound();
	const std::string	getType() const;
	void				setType(const std::string&);
private:
protected:
	std::string	type;
};

#endif // ANIMAL_HPP
