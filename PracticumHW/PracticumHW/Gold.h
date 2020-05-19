#ifndef GOLD_H
#define GOLD_H

#include "Element.h"
#include "Metal.h"

class Gold : public Metal, virtual public Element
{
public:
	Gold();
	virtual std::unordered_set<ElementType> getCompositions() override;
	virtual std::unordered_set<ElementType> getInteractions() override;

	// Inherited via Element
	virtual std::string toString() override;
};

#endif // !GOLD_H
