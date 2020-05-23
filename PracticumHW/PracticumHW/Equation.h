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
	virtual std::vector<Element*> execute() override;
	virtual bool isValid() override;
};

#endif // !EQUATION_H
