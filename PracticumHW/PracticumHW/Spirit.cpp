#include "Spirit.h"

std::unordered_set<ElementType> Spirit::getCompositions()
{
	return std::unordered_set<ElementType> {ElementType::AIR};
}

std::unordered_set<ElementType> Spirit::getInteractions()
{
	return Air::getInteractions();
}
