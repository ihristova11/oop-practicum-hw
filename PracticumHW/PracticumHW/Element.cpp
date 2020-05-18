#include <typeinfo>

#include "Element.h"

bool Element::operator==(const Element& rhs)
{
	return typeid(this).name() == typeid(rhs).name(); // check it again 
}

bool Element::canInteractWith(const std::vector<Element*>& elements)
{
	bool canInteract = true;
	std::unordered_set<ElementType> interactions = this->getInteractions();

	for (Element* el : elements)
	{
		std::unordered_set<ElementType>::const_iterator found = interactions.find(el->type);
		if (found == interactions.end()) // element not found
		{
			canInteract = false;
			break;
		}
	}
	return canInteract;
}

ElementType Element::getType() const
{
	return this->type;
}
