#include "Gold.h"

std::unordered_set<ElementType> Gold::getCompositions()
{
	std::unordered_set<ElementType> result;
	std::unordered_set<ElementType> metalCompositions = Metal::getCompositions();

	result.insert(metalCompositions.begin(), metalCompositions.end());

	return result;
}

std::unordered_set<ElementType> Gold::getInteractions()
{
	std::unordered_set<ElementType> result;
	std::unordered_set<ElementType> metalInteractions = Metal::getInteractions();

	result.insert(metalInteractions.begin(), metalInteractions.end());

	return result;
}
