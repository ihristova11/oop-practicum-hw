#ifndef EARTH_H
#define EARTH_H

#include "Element.h"

class Earth : public virtual Element
{
public:
	Earth();
	virtual std::unordered_set<ElementType> getCompositions() override;
	virtual std::unordered_set<ElementType> getInteractions() override;
	virtual std::string toString() override;
};

#endif // !EARTH_H
