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
	razparchatosai(this->book.getPhilosophersStone());
	return false; // shtoto to sig nqma da trygne i bez tva
}

void Alchemist::razparchatosai(Element* element)
{
	if (element->getType() != ElementType::COMPOSITE && element->getType() != ElementType::PHILOSOPHERS_STONE)
	{
		this->book.razparchatosani.push_back(element);
		return;
	}
	Formula* formula = this->book.getFormula(element);
	if (formula == nullptr)
		return; // tuka ne e dobre polojenieto
	for (Element* e: formula->getElements())
	{
		razparchatosai(e);
	}
}