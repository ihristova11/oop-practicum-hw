#include "Alchemist.h"
#include <utility>
#include <vector>

Alchemist::Alchemist(const Book& book, std::vector<std::pair<int, Element*>> elementsQuantity)
{
	this->book = book;
	copy(elementsQuantity.begin(), elementsQuantity.end(), back_inserter(this->elementsQuantity));
}

bool Alchemist::canComposePhilosophersStone()
{
	if (this->book.getPhilosophersStoneFormula() == nullptr)
	{
		return false;
	}
	else
	{
		// update alchemist resources
	}
}
