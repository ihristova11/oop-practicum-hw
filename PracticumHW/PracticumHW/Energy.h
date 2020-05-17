#ifndef ENERGY_H
#define  ENERGY_H

#include "Element.h"
#include "Water.h"
#include "Air.h"

class Energy : public Air, public Water, public Element
{
};

#endif // !ENERGY_H
