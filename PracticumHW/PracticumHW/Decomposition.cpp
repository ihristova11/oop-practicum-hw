#include "Decomposition.h"

Decomposition::Decomposition(Element* element) : element(element)
{ }

std::pair<Element, Element> Decomposition::execute()
{
	return std::pair<Element, Element>();
}

bool Decomposition::containsElement(const Element*)
{
	return false;
}
