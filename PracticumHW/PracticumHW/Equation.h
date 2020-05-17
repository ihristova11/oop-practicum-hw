#ifndef EQUATION_H
#define EQUATION_H

#include <utility>
#include <vector>

#include "Formula.h"
#include "Element.h"

class Equation : public Formula
{
public:
	Equation(std::vector<Element*>, Element*);
private:
	std::vector<Element*> elements;

	// Inherited via Formula
	virtual bool containsElement(const Element*) override;

	// Inherited via Formula
	virtual std::pair<Element, Element> execute() override;
};

#endif // !EQUATION_H
