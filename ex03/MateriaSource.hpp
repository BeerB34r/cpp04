#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include "AMateria.hpp"
#include "IMateriaSource.hpp"

class	MateriaSource : IMateriaSource {
public:
	MateriaSource();
	MateriaSource(const MateriaSource&);
	MateriaSource& operator =(const MateriaSource&);
	~MateriaSource();

	void	learnMateria(AMateria*) override;
	AMateria*	createMateria(const std::string& type) override;
private:
	typedef AMateria* materia;
	materia	memory[4] = {0, 0, 0, 0};
protected:
};

#endif // MATERIASOURCE_HPP
