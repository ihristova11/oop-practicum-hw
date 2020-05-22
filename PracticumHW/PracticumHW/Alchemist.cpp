#include "Alchemist.h"
#include "PhilosophersStone.h"

#include <utility>
#include <vector>

Alchemist::Alchemist(const Book& book, std::vector<std::pair<int, Element*>> elementsQuantity)
{
	this->book = book;
	copy(elementsQuantity.begin(), elementsQuantity.end(), back_inserter(this->elementsQuantity));
}

bool Alchemist::canComposePhilosophersStone()
{
	this->splitComposition(this->book.getPhilosophersStone());

	if (this->book.splitElements.size() <= 0)
		return false;

	for (Element* e : this->book.splitElements)
	{
		for (std::pair<int, Element*> p : this->elementsQuantity)
		{
			if (p.second->toString() == e->toString())
			{
				--p.first;
			}
		}
	}

	for (std::pair<int, Element*> p : this->elementsQuantity)
	{
		if (p.first < 0)
			return false;
	}

	return true;
}

void Alchemist::splitComposition(Element* element) // works ok, needs refactoring
{
	if (element->getType() != ElementType::COMPOSITE && element->getType() != ElementType::PHILOSOPHERS_STONE)
	{

		// execute can push to a book's collection
		this->book.splitElements.push_back(element);
		return;
	}
	Formula* formula = this->book.getFormula(element);
	if (formula == nullptr)
		return;
	for (Element* e : formula->getElements())
	{
		this->splitComposition(e);
	}
}