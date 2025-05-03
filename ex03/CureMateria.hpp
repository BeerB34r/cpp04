#ifndef CUREMATERIA_HPP
# define CUREMATERIA_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"

class CureMateria : public AMateria {
public:
	CureMateria();
	CureMateria(const CureMateria&);
	CureMateria& operator =(const CureMateria&);
	~CureMateria();

	CureMateria*	clone() const;
	void	use(ICharacter& target);
private:
protected:
};

#endif // CUREMATERIA_HPP
