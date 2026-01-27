#ifndef BRAIN_HPP
#define BRAIN_HPP
#include <iostream>


class Brain {
private:
	std::string _ideas[100];
public:
	Brain();
	Brain(const Brain& );
	Brain& operator=(const Brain&);

	const std::string getIdeas(int idx) const;
	void setIdeas(int idx, std::string idea);

	~Brain();
};

#endif