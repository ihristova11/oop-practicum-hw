#include "Alchemist.h"
#include "PhilosophersStone.h"

#include <utility>
#include <vector>

Alchemist::Alchemist(const Book& book, std::vector<std::pair<Element*, int>> elementsQuantity)
	: book(book)
{
	copy(elementsQuantity.begin(), elementsQuantity.end(), back_inserter(this->elementsQuantity));
}

Alchemist::~Alchemist()
{
	this->elementsQuantity.clear();
}

bool Alchemist::canComposePhilosophersStone()
{
	this->splitComposition(this->book.getElement(ElementType::PHILOSOPHERS_STONE));

	if (this->book.splitElements.size() <= 0)
		return false;

	for (Element* e : this->book.splitElements)
	{
		for (size_t i = 0; i < this->elementsQuantity.size(); i++)
		{
			if (this->elementsQuantity[i].first->toString() == e->toString())
				this->elementsQuantity[i].second--;
		}
	}

	for (std::pair<Element*, int> p : this->elementsQuantity)
	{
		if (p.second < 0)
			return false;
	}

	return true;
}

// process all elements
void Alchemist::splitComposition(Element* element)
{
	if (element->getType() != ElementType::COMPOSITE && element->getType() != ElementType::PHILOSOPHERS_STONE)
	{
		this->book.splitElements.push_back(element);
		return;
	}
	Formula* formula = this->book.getFormula(element);
	if (formula == nullptr)
		return;
	for (Element* e : formula->execute())
	{
		this->splitComposition(e);
	}
}