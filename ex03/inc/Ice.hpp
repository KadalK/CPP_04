#ifdef Cure_hpp
#define Cure_hpp
#include "AMateria.hpp"

class Cure : public AMateria {
private:

public:
	Cure();
	Cure(const Cure&);
	AMateria* clone() const;
	Cure& operator=(const Cure&);
	void use(ICharacter& target);
	~Cure();
};

#endif
