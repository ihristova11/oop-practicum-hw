#include "Water.h"

Water::Water()
{
	Element::type == ElementType::WATER;
}

std::unordered_set<ElementType> Water::getCompositions()
{
	return std::unordered_set<ElementType>();
}

std::unordered_set<ElementType> Water::getInteractions()
{
	return std::unordered_set<ElementType> {ElementType::FIRE, ElementType::AIR};
}
