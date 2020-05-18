#ifndef AIR_H
#define AIR_H

#include <vector>

#include "Element.h"

class Air : public Element
{
public:
	virtual std::unordered_set<ElementType> getCompositions() override;
	virtual std::unordered_set<ElementType> getInteractions() override;
};

#endif // !AIR_H
