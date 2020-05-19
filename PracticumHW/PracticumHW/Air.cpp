#include "Air.h"

Air::Air()
{
	Element::type = ElementType::AIR;
}

std::unordered_set<ElementType> Air::getCompositions()
{
	return std::unordered_set<ElementType>();
}

std::unordered_set<ElementType> Air::getInteractions()
{
	return std::unordered_set<ElementType> {ElementType::FIRE, ElementType::AIR, ElementType::WATER, ElementType::EARTH };
}

std::string Air::toString()
{
	return "air";
}
