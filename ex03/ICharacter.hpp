#ifndef ICHARACTER_HPP
# define ICHARACTER_HPP

#include <string>

class	AMateria;

class	ICharacter {
public:
	ICharacter();
	ICharacter(const std::string&);
	ICharacter(const ICharacter&);
	ICharacter& operator =(const ICharacter&);
	virtual ~ICharacter();

	virtual const std::string&	getName() const = 0;
	virtual void	equip(AMateria*) = 0;
	virtual void	unequip(int) = 0;
	virtual void	use(int, ICharacter&) = 0;
private:
protected:
	std::string	name;
};

#endif // ICHARACTER_HPP
