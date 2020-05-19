#ifndef SPIRIT_H
#define SPIRIT_H

#include "Element.h"
#include "Air.h"

class Spirit : public Air, public virtual Element
{
public:
	Spirit();
	virtual std::unordered_set<ElementType> getCompositions() override;
	virtual std::unordered_set<ElementType> getInteractions() override;

	// Inherited via Element
	virtual std::string toString() override;
};

#endif // !SPIRIT_H
