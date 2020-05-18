#include "PhilosophersStone.h"

std::unordered_set<ElementType> PhilosophersStone::getCompositions()
{
	return std::unordered_set<ElementType>{ElementType::FIRE, ElementType::WATER, ElementType::AIR, ElementType::EARTH};
}

std::unordered_set<ElementType> PhilosophersStone::getInteractions()
{
	std::unordered_set<ElementType> result;
	std::unordered_set<ElementType> fireInteractions = Fire::getInteractions();
	std::unordered_set<ElementType> waterInteractions = Water::getInteractions();
	std::unordered_set<ElementType> airInteractions = Air::getInteractions();
	std::unordered_set<ElementType> earthInteractions = Earth::getInteractions();

	result.insert(fireInteractions.begin(), fireInteractions.end());
	result.insert(waterInteractions.begin(), waterInteractions.end());
	result.insert(airInteractions.begin(), airInteractions.end());
	result.insert(earthInteractions.begin(), earthInteractions.end());

	return result;
}
