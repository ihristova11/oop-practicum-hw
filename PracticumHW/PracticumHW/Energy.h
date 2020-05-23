#ifndef ENERGY_H
#define  ENERGY_H

#include "Element.h"
#include "Water.h"
#include "Air.h"

class Energy : public Air, public Water
{
public:
	Energy();
	virtual std::unordered_set<ElementType> getCompositions() override;
	virtual std::unordered_set<ElementType> getInteractions() override;
	virtual std::string toString() override;
};

#endif // !ENERGY_H
