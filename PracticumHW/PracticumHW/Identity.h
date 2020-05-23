#ifndef IDENTITY_H
#define IDENTITY_H

#include "Formula.h"

class Identity : public Formula
{
public:
	virtual bool isValid() override;
	virtual std::vector<Element*> execute() override;
};

#endif // !IDENTITY_H
