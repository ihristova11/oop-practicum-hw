#include <typeinfo>

#include "Element.h"

bool Element::operator==(const Element& rhs)
{
	return typeid(this).name() == typeid(rhs).name(); // check it again 
}

bool Element::canInteractWith(const std::vector<Element*>& elements)
{
	bool canInteract = true;
	for (Element* el : elements)
	{
		std::unordered_set<ElementType>::iterator found = this->getInteractions().find(el->type);
		if (found == this->getInteractions().end()) // element not found
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
