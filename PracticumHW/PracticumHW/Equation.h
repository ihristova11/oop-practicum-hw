#ifndef EQUATION_H
#define EQUATION_H

#include <vector>

#include "Formula.h"
#include "Element.h"

class Equation : public Formula
{
private:
	std::vector<Element> elements;
};

#endif // !EQUATION_H
