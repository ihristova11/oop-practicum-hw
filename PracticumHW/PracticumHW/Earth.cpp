#include "Earth.h"

Earth::Earth()
{
	Element::type = ElementType::EARTH;
}

std::unordered_set<ElementType> Earth::getCompositions()
{
	return std::unordered_set<ElementType>();
}

std::unordered_set<ElementType> Earth::getInteractions()
{
	return std::unordered_set<ElementType> {ElementType::FIRE, ElementType::AIR, ElementType::WATER};
}
