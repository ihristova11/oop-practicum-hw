#include "Stone.h"

std::unordered_set<ElementType> Stone::getCompositions()
{
	return std::unordered_set<ElementType> {ElementType::WATER, ElementType::FIRE};
}

std::unordered_set<ElementType> Stone::getInteractions()
{
	std::unordered_set<ElementType> result;
	std::unordered_set<ElementType> waterInteractions = Water::getInteractions();
	std::unordered_set<ElementType> fireInteractions = Fire::getInteractions();

	result.insert(waterInteractions.begin(), waterInteractions.end());
	result.insert(fireInteractions.begin(), fireInteractions.end());

	return result;
}
