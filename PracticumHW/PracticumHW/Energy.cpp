#include "Energy.h"

std::unordered_set<ElementType> Energy::getCompositions()
{
	// get compositions of base classes
	return std::unordered_set<ElementType>{ElementType::AIR, ElementType::WATER};
}

std::unordered_set<ElementType> Energy::getInteractions()
{
	std::unordered_set<ElementType> result;
	Water::getInteractions();
	Air::getInteractions();
	return result;
}
