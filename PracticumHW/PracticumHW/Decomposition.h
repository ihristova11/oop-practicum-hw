#ifndef DECOMPOSITION_H
#define DECOMPOSITION_H

#include <utility>

#include "Formula.h"
#include "Element.h"

class Decomposition : public Formula
{
public:
	Decomposition(Element*);
	~Decomposition();

	std::vector<Element*> getConstructed(const std::unordered_set<ElementType>&);
private: 
	std::vector<Element*> constructedElements;
	virtual std::vector<Element*> execute() override;
	virtual bool isValid() override;
	void constructElements(const std::unordered_set<ElementType>&);
};

#endif // !DECOMPOSITION_H
