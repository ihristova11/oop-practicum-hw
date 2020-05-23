#ifndef AIR_H
#define AIR_H

#include <vector>

#include "Element.h"

class Air : public virtual Element
{
public:
	Air();
	virtual std::unordered_set<ElementType> getCompositions() override;
	virtual std::unordered_set<ElementType> getInteractions() override;
	virtual std::string toString() override;
};

#endif // !AIR_H
