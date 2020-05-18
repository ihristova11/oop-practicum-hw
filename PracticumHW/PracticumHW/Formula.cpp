#include "Formula.h"

Element* Formula::getResult() const
{
	return this->result;
}

std::vector<Element*> Formula::getElements() const
{
	return this->elements;
}
