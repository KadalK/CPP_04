#ifndef CURE_HPP
#define CURE_HPP
#include "AMateria.hpp"
#include "ICharacter.hpp"



class Cure : public AMateria {
private:
	std::string _type;
public:
	Cure();
	Cure(const Cure&);
	AMateria* clone() const;
	Cure& operator=(const Cure&);
	void use(ICharacter& );
	std::string	getType() const;
	~Cure();
};

#endif
