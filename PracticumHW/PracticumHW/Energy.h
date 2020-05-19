#ifndef ENERGY_H
#define  ENERGY_H

#include "Element.h"
#include "Water.h"
#include "Air.h"

class Energy : public Air, public Water, virtual public Element
{
public:
	Energy();
	virtual std::unordered_set<ElementType> getCompositions() override;
	virtual std::unordered_set<ElementType> getInteractions() override;

	// Inherited via Element
	virtual std::string toString() override;
};

#endif // !ENERGY_H
