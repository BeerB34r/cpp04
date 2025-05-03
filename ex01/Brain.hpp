#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <string>

class Brain {
public:
	Brain();
	Brain(const Brain&);
	Brain& operator =(const Brain&);
	~Brain();

	void	think(const std::string& thought) ;
	const std::string& readMind(unsigned int i) const;
private:
	std::string	ideas[100];
protected:
};

#endif // BRAIN_HPP
