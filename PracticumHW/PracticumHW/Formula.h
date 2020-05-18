#ifndef FORMULA_H
#define FORMULA_H

#include <utility>
#include <vector>

#include "Element.h"

class Formula
{
public: 
	virtual bool isValid() = 0;
	
	Element* getResult() const;
protected:
	Element* result;
	virtual std::pair<Element*, Element*> execute() = 0; // ? do we need this - probably yes
	virtual bool containsElement(const Element*) = 0;
};

#endif // !FORMULA_H
