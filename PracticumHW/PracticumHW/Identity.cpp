#include "Identity.h"

bool Identity::isValid()
{
	// always true
	return true;
}

std::vector<Element*> Identity::execute()
{
	return std::vector<Element*> { this->elements[0] };
}
