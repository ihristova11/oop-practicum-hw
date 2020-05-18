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

std::pair<Element*, Element*> Equation::execute()
{

	return std::pair<Element*, Element*>();
}

bool Equation::isValid() // todo: check 
{
	bool isValid = true;

	for (int i = 0; i < this->elements.size(); i++)
	{
		// check if element can interact 
		std::vector<Element*> temp;
		copy(this->elements.begin(), this->elements.end(), back_inserter(temp));
		temp.erase(temp.begin() + i);
		isValid = isValid && this->elements[i]->canInteractWith(temp);
	}

	return isValid;
}
