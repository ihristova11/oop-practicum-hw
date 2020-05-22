#ifndef ALCHEMIST_H
#define ALCHEMIST_H

#include <vector>

#include "Book.h"
#include "Element.h"

class Alchemist
{
public:
	Alchemist(const Book&, std::vector<std::pair<int, Element*>>);

	bool canComposePhilosophersStone();
	void splitComposition(Element*);
private:
	Book book;
	std::vector<std::pair<int, Element*>> elementsQuantity;
};

#endif // !ALCHEMIST_H
