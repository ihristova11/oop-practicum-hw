#ifndef FIRE_H
#define FIRE_H

#include "Element.h"

class Fire : public Element
{
public:
	Fire();
	virtual std::unordered_set<ElementType> getCompositions() override;
	virtual std::unordered_set<ElementType> getInteractions() override;
	virtual std::string toString() override;
};

#endif // !FIRE_H
