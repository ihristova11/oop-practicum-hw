#include "Metal.h"

std::unordered_set<ElementType> Metal::getCompositions()
{
	return std::unordered_set<ElementType> {ElementType::FIRE, ElementType::EARTH};
}

std::unordered_set<ElementType> Metal::getInteractions()
{
	std::unordered_set<ElementType> result;
	std::unordered_set<ElementType> earthInteractions = Earth::getInteractions();
	std::unordered_set<ElementType> fireInteractions = Fire::getInteractions();

	result.insert(earthInteractions.begin(), earthInteractions.end());
	result.insert(fireInteractions.begin(), fireInteractions.end());

	return result;
}
