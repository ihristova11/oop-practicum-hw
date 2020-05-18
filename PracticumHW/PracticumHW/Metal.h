#ifndef METAL_H
#define METAL_H

#include "Element.h"
#include "Earth.h"
#include "Fire.h"

class Metal : public Fire, public Earth, public Element
{
public:
	virtual std::unordered_set<ElementType> getCompositions() override;
	virtual std::unordered_set<ElementType> getInteractions() override;
};

#endif // !METAL_H
