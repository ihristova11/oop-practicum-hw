#include "Energy.h"

Energy::Energy()
{
	Element::type = ElementType::COMPOSITE;
}

std::unordered_set<ElementType> Energy::getCompositions()
{
	return std::unordered_set<ElementType>{ElementType::AIR, ElementType::WATER};
}

std::unordered_set<ElementType> Energy::getInteractions()
{
	std::unordered_set<ElementType> result;
	std::unordered_set<ElementType> waterInteractions = Water::getInteractions();
	std::unordered_set<ElementType> airInteractions = Air::getInteractions();

	result.insert(waterInteractions.begin(), waterInteractions.end());
	result.insert(airInteractions.begin(), airInteractions.end());

	return result;
}

std::string Energy::toString()
{
	return "energy";
}
