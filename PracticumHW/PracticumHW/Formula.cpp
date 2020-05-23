#include "Formula.h"

Element* Formula::getResult() const
{
	return this->result;
}

std::vector<Element*> Formula::getElements() const
{
	return this->elements;
}

bool Formula::containsElement(const Element* element)
{
	for (Element* e : this->elements)
	{
		if (e == element)
		{
			return true;
		}
	}
	return false;
}