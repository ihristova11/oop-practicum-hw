#ifndef STONE_H
#define STONE_H

#include "Element.h"
#include "Fire.h"
#include "Water.h"

class Stone : public Fire, public Water
{
public:
	Stone();
	virtual std::unordered_set<ElementType> getCompositions() override;
	virtual std::unordered_set<ElementType> getInteractions() override;
	virtual std::string toString() override;
};

#endif // !STONE_H
