#include "Fire.h"

Fire::Fire()
{
	Element::type = ElementType::FIRE;
}

std::unordered_set<ElementType> Fire::getCompositions()
{
	return std::unordered_set<ElementType>();
}

std::unordered_set<ElementType> Fire::getInteractions()
{
	return std::unordered_set<ElementType> {ElementType::FIRE, ElementType::WATER, ElementType::EARTH};
}

std::string Fire::toString()
{
	return "fire";
}
