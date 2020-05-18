#ifndef STONE_H
#define STONE_H

#include "Element.h"
#include "Fire.h"
#include "Water.h"

class Stone : public Fire, public Water, public virtual Element
{
public:
	virtual std::unordered_set<ElementType> getCompositions() override;
	virtual std::unordered_set<ElementType> getInteractions() override;
};

#endif // !STONE_H
