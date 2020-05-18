#include "Gold.h"

std::unordered_set<ElementType> Gold::getCompositions()
{
	// get compositions of base class
	Metal::getCompositions();
	return std::unordered_set<ElementType>();
}

std::unordered_set<ElementType> Gold::getInteractions()
{
	Metal::getInteractions();
	return std::unordered_set<ElementType>();
}
