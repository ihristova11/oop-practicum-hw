#ifndef FORMULA_H
#define FORMULA_H

#include "Element.h"

class Formula
{
public: 
	bool isValid();
protected:
	Element result;
	void execute(); // ? do we need this - probably yes
	virtual bool containsElement(const Element&) = 0;
};

#endif // !FORMULA_H
