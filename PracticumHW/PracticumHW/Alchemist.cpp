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
		std::vector<Element*> foundInBook;

		Formula* philosophers = this->book.getPhilosophersStoneFormula();
		calc(philosophers->getElements(), foundInBook);




		// update alchemist resources
	}
}

Element* Alchemist::calc(std::vector<Element*> elements, std::vector<Element*> res)
{
	for (Element* el : elements)
	{
		if (el->getType() != ElementType::COMPOSITE)
		{
			// add to vector
			res.push_back(el);
			return el;
		}

		calc(this->book.getFormula(el)->getElements(), res);
	}
}
