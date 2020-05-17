#include <typeinfo>

#include "Element.h"

bool Element::operator==(const Element& rhs)
{
	return typeid(this).name() == typeid(rhs).name(); // check it again 
}
