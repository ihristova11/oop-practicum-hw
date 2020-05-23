#include "Decomposition.h"

Decomposition::Decomposition(Element* element)
{
	Formula::elements = std::vector<Element*>{ element };
}

std::vector<Element*> Decomposition::execute()
{
	// if base or phil... - return pair of base elements
	// if composite of one - return a pair of this element would be one case with this at the bottom
	// if composite - return a pair of elements

			/*std::pair<Element*, Element*> result;*/
	if (this->elements[0]->getType() != ElementType::COMPOSITE 
		|| this->elements[0]->getType() == ElementType::PHILOSOPHERS_STONE)
	{
		return std::vector<Element*> {this->elements[0], this->elements[0] };
	}
	else
	{
		// construct elements
		this->getElements()[0]->getCompositions();
	}



	return std::vector<Element*>();
}

bool Decomposition::isValid()
{
	return true;
}
