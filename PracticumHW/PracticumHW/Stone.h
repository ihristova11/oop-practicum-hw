#ifndef STONE_H
#define STONE_H

#include "Element.h"
#include "Fire.h"
#include "Water.h"

class Stone : public Fire, public Water, public Element
{
};

#endif // !STONE_H
