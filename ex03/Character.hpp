#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include "ICharacter.hpp"

class	Character : public ICharacter {
public:
	Character();
	Character(const std::string&);
	Character(const Character&);
	Character& operator =(const Character&);
	~Character();

	const std::string&	getName() const override;
	void	equip(AMateria*) override;
	void	unequip(int) override ;
	void	use(int, ICharacter&) override;
private:
	typedef AMateria* materia;
	materia	inventory[4] = { 0, 0, 0, 0 };
protected:
};

#endif // CHARACTER_HPP
