#include "Equation.h"

#include <vector>
#include <utility>

Equation::Equation(std::vector<Element*> elements, Element* result)
{
	Formula::result = result;
	copy(elements.begin(), elements.end(), back_inserter(this->elements));
}

std::vector<Element*> Equation::execute()
{
	return this->elements;
}

bool Equation::isValid()
{
	bool isValid = true;

	for (int i = 0; i < this->elements.size(); i++)
	{
		std::vector<Element*> temp;
		temp = this->elements;
		temp.erase(temp.begin() + i);
		isValid = isValid && this->elements[i]->canInteractWith(temp);
	}

	return isValid;
}
