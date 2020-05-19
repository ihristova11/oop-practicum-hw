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

	Element* calc(std::vector<Element*> elements, std::vector<Element*> res);
	void splitComposition(Element*);
private:
	Book book;
	std::vector<std::pair<int, Element*>> elementsQuantity;
};

#endif // !ALCHEMIST_H
