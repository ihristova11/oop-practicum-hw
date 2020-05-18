#include "Metal.h"

std::unordered_set<ElementType> Metal::getCompositions()
{
	Fire::getCompositions();
	Earth::getCompositions();
	return std::unordered_set<ElementType>();
}

std::unordered_set<ElementType> Metal::getInteractions()
{
	Fire::getInteractions();
	Earth::getInteractions();
	return std::unordered_set<ElementType>();
}
