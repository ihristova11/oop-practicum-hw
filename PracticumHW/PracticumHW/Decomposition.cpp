#include "Decomposition.h"

Decomposition::Decomposition(Element* element)
{
	Formula::elements = std::vector<Element*>{ element };
}

std::pair<Element*, Element*> Decomposition::execute()
{
	// if base or phil... - return pair of base elements
	// if composite of one - return a pair of this element
	// if composite - return a pair of elements
	return std::pair<Element*, Element*>();
}

bool Decomposition::containsElement(const Element*) //not sure if needed ?
{
	return false;
}

bool Decomposition::isValid()
{
	return true;
}
