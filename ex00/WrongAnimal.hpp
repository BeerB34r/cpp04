#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <string>

class	WrongAnimal {
public:
	WrongAnimal();
	WrongAnimal(const WrongAnimal&);
	WrongAnimal& operator =(const WrongAnimal&);
	~WrongAnimal();

	void	makeSound();
	const std::string	getType() const;
	void				setType(const std::string&);
private:
protected:
	std::string	type;
};

#endif // WRONGANIMAL_HPP
