#include "Water.h"

std::unordered_set<ElementType> Water::getCompositions()
{
	return std::unordered_set<ElementType>();
}

std::unordered_set<ElementType> Water::getInteractions()
{
	return std::unordered_set<ElementType> {ElementType::FIRE, ElementType::AIR};
}
