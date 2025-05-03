#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include "ICharacter.hpp"

class	AMateria {
public:
	AMateria();
	AMateria(const std::string&);
	AMateria(const AMateria&);
	AMateria& operator =(const AMateria&);
	virtual ~AMateria();

	const std::string&	getType() const;
	virtual AMateria*	clone() const = 0;
	virtual void	use(ICharacter& target) = 0;
private:
protected:
	std::string	type;
};

#endif // AMATERIA_HPP
