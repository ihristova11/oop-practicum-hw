#ifndef PHILOSOPHERS_STONE_H
#define PHILOSOPHERS_STONE_H

#include "Element.h"
#include "Air.h"
#include "Water.h"
#include "Earth.h"
#include "Fire.h"

class PhilosophersStone : public Air, public Water, public Earth, public Fire, public Element
{
};

#endif // !PHILOSOPHERS_STONE_H
