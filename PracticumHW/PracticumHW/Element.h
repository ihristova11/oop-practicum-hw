#ifndef ELEMENT_H
#define ELEMENT_H

#include <vector>
#include <unordered_set>

#include "ElementType.h"

class Element
{
public:
	virtual	std::unordered_set<ElementType> getCompositions() = 0;
	virtual std::unordered_set<ElementType> getInteractions() = 0;
	virtual std::string toString() = 0;

	bool operator==(const Element&);
	bool canInteractWith(const std::vector<Element*>&);

	ElementType getType() const;
protected:
	ElementType type;
};

#endif // !ELEMENT_H
