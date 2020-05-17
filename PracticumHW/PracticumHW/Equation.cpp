#include "Equation.h"
#include <vector>
#include <utility>

Equation::Equation(std::vector<Element*> elements, Element* result)
{
	Formula::result = result;
	copy(elements.begin(), elements.end(), back_inserter(this->elements)); // check it USE DIFF IMPLEMENTATION
}

bool Equation::containsElement(const Element* element)
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

std::pair<Element, Element> Equation::execute()
{
	return std::pair<Element, Element>();
}
