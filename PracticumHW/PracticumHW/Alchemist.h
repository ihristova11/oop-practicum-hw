#ifndef ALCHEMIST_H
#define ALCHEMIST_H

#include <vector>

#include "Book.h"
#include "Element.h"

class Alchemist
{
public:
	Alchemist(const Book&, std::vector<std::pair<Element*, int>>);
	~Alchemist();

	bool canComposePhilosophersStone();
	void splitComposition(Element*);
private:
	Book book;
	std::vector<std::pair<Element*, int>> elementsQuantity;
};

#endif // !ALCHEMIST_H
