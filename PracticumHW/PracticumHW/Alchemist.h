#ifndef ALCHEMIST_H
#define ALCHEMIST_H

#include <vector>

#include "Book.h"
#include "Element.h"

class Alchemist
{
public:
	bool canComposePhilosophersStone();
private:
	Book book;
	std::vector<Element> elements;
};

#endif // !ALCHEMIST_H
