#ifndef ELEMENT_H
#define ELEMENT_H

#include "Composition.h"
#include "Interaction.h"

class Element
{
public:
	Composition composition;
	Interaction interaction;
	bool operator==(const Element&);
};

#endif // !ELEMENT_H
