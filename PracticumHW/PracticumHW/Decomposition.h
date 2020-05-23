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
	virtual std::vector<Element*> execute() override;
	virtual bool isValid() override;
};

#endif // !DECOMPOSITION_H
