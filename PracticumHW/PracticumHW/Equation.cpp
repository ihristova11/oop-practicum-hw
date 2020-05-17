#include "Equation.h"

bool Equation::containsElement(const Element& element)
{
	for (Element e: elements)
	{
		if (e == element)
		{
			return true;
		}
	}
	return false;
}
