#ifndef ICEMATERIA_HPP
# define ICEMATERIA_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"

class IceMateria : public AMateria {
public:
	IceMateria();
	IceMateria(const IceMateria&);
	IceMateria& operator =(const IceMateria&);
	~IceMateria();

	IceMateria*	clone() const;
	void	use(ICharacter& target);
private:
protected:
};

#endif // ICEMATERIA_HPP
