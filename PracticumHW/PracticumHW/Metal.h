#ifndef METAL_H
#define METAL_H

#include "Element.h"
#include "Earth.h"
#include "Fire.h"

class Metal : public Fire, public Earth
{
public:
	Metal();
	virtual std::unordered_set<ElementType> getCompositions() override;
	virtual std::unordered_set<ElementType> getInteractions() override;
	virtual std::string toString() override;
};

#endif // !METAL_H
