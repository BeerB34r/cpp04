#ifndef IMATERIASOURCE_HPP
# define IMATERIASOURCE_HPP

#include "AMateria.hpp"

class	IMateriaSource {
public:
	IMateriaSource();
	IMateriaSource(const IMateriaSource&);
	IMateriaSource& operator =(const IMateriaSource&);
	virtual ~IMateriaSource();

	virtual void	learnMateria(AMateria*) = 0;
	virtual AMateria*	createMateria(const std::string& type) = 0;
private:
protected:
};

#endif // IMATERIASOURCE_HPP
