#ifndef EQUATION_H
#define EQUATION_H

#include <vector>

#include "Formula.h"
#include "Element.h"

class Equation : public Formula
{
private:
	std::vector<Element> elements;

	// Inherited via Formula
	virtual bool containsElement(const Element&) override;
};

#endif // !EQUATION_H
