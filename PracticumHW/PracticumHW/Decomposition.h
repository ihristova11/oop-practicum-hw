#ifndef DECOMPOSITION_H
#define DECOMPOSITION_H

#include <utility>

#include "Formula.h"
#include "Element.h"

class Decomposition : public Formula
{
public:
	Decomposition(Element*);
private: 
	virtual std::pair<Element*, Element*> execute() override;
	virtual bool containsElement(const Element*) override;

	// Inherited via Formula
	virtual bool isValid() override;
};

#endif // !DECOMPOSITION_H
