#ifndef WATER_H
#define WATER_H

#include "Element.h"

class Water : public Element
{
public:
	Water();
	virtual std::unordered_set<ElementType> getCompositions() override;
	virtual std::unordered_set<ElementType> getInteractions() override;

	// Inherited via Element
	virtual std::string toString() override;
};

#endif // !WATER_H
