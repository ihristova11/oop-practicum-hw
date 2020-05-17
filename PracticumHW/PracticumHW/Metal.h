#ifndef METAL_H
#define METAL_H

#include "Element.h"
#include "Earth.h"
#include "Fire.h"

class Metal : public Fire, public Earth, public Element
{
};

#endif // !METAL_H
