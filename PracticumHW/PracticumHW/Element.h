#ifndef ELEMENT_H
#define ELEMENT_H

#include <vector>
#include <unordered_set>

#include "ElementType.h"

class Element
{
public:
	virtual	std::unordered_set<ElementType> getCompositions() = 0; //a.k.a parents
	virtual std::unordered_set<ElementType> getInteractions() = 0;
	bool operator==(const Element&);
};

#endif // !ELEMENT_H
