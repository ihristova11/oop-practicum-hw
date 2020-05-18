#ifndef WATER_H
#define WATER_H

#include "Element.h"

class Water : public Element
{
public:
	virtual std::unordered_set<ElementType> getCompositions() override;
	virtual std::unordered_set<ElementType> getInteractions() override;
};

#endif // !WATER_H
