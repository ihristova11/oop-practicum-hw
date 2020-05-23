#include "Decomposition.h"
#include "Air.h"
#include "Fire.h"
#include "Water.h"
#include "Earth.h"

Decomposition::Decomposition(Element* element)
{
	Formula::elements = std::vector<Element*>{ element };
}

Decomposition::~Decomposition()
{
	this->constructedElements.clear();
}

std::vector<Element*> Decomposition::getConstructed(const std::unordered_set<ElementType>& elements)
{
	this->constructElements(elements);
	return this->constructedElements;
}

std::vector<Element*> Decomposition::execute()
{
	if (this->elements[0]->getType() != ElementType::COMPOSITE
		|| this->elements[0]->getType() == ElementType::PHILOSOPHERS_STONE)
	{
		return std::vector<Element*> {this->elements[0], this->elements[0] };
	}
	return this->constructedElements;
}

bool Decomposition::isValid()
{
	return true;
}

void Decomposition::constructElements(const std::unordered_set<ElementType>& elements)
{
	for (ElementType et : elements)
	{
		switch (et)
		{
			// all of them are base elements
		case ElementType::AIR:
			this->constructedElements.push_back(new Air);
			break;
		case ElementType::FIRE:
			this->constructedElements.push_back(new Fire);
			break;
		case ElementType::WATER:
			this->constructedElements.push_back(new Water);
			break;
		case ElementType::EARTH:
			this->constructedElements.push_back(new Earth);
			break;
		}
	}
}
