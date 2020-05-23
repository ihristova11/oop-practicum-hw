#include <typeinfo>

#include "Element.h"

bool Element::operator==(const Element& rhs)
{
	return typeid(this).name() == typeid(rhs).name();
}

bool Element::canInteractWith(const std::vector<Element*>& elements)
{
	bool canInteract = true;
	bool end = false;

	for (Element* el : elements)
	{
		if (el->type != ElementType::COMPOSITE && this->type != ElementType::COMPOSITE) // both are base
		{
			std::unordered_set<ElementType> interactions = this->getInteractions();
			std::unordered_set<ElementType>::const_iterator found = interactions.find(el->type);
			if (found == interactions.end()) // element not found
			{
				canInteract = false;
				break;
			}
		}
		else if ((el->type != ElementType::COMPOSITE && this->type == ElementType::COMPOSITE) // composite + base
			|| (this->type != ElementType::COMPOSITE && el->type == ElementType::COMPOSITE))
		{
			Element* base = el->type == ElementType::COMPOSITE ? this : el;
			Element* composite = el->type == ElementType::COMPOSITE ? el : this;

			// composite should interact with base
			std::unordered_set<ElementType> compositeInteractions = composite->getInteractions();
			std::unordered_set<ElementType>::iterator foundBase = compositeInteractions.find(base->type);
			if (foundBase == compositeInteractions.end()) // not found
			{
				canInteract = false;
				break;
			}

			// base should interact with getCompositions()
			//std::unordered_set<ElementType> compositeParents = composite->getCompositions();
			//std::unordered_set<ElementType> baseInteractions = base->getInteractions();
			//for (ElementType et : compositeParents)
			//{
			//	std::unordered_set<ElementType>::iterator foundCompositeParent = baseInteractions.find(et);
			//	if (foundCompositeParent == baseInteractions.end()) // not found
			//	{
			//		canInteract = false;
			//		end = true;
			//		break;
			//	}
			//}
			//if (end) break;

		}
		else if (el->type == ElementType::COMPOSITE && this->type == ElementType::COMPOSITE) // both are composite
		{
			//// first interacts with parents
			//std::unordered_set<ElementType> secondParents = this->getCompositions();
			//for (ElementType et : secondParents)
			//{
			//	std::unordered_set<ElementType> firstInteractions = el->getInteractions();
			//	std::unordered_set<ElementType>::iterator foundParent = firstInteractions.find(et);
			//	if (foundParent == firstInteractions.end())
			//	{
			//		canInteract = false; 
			//		end = true;
			//		break;
			//	}
			//}

			//if (end) break;

			//second interacts with parents
			std::unordered_set<ElementType> firstParents = el->getCompositions();
			for (ElementType et : firstParents)
			{
				std::unordered_set<ElementType> secondInteractions = this->getInteractions();
				std::unordered_set<ElementType>::iterator foundParent = secondInteractions.find(et);
				if (foundParent == secondInteractions.end())
				{
					canInteract = false;
					end = true;
					break;
				}
			}

			if (end) break;
		}
	}
	return canInteract;
}

ElementType Element::getType() const
{
	return this->type;
}
