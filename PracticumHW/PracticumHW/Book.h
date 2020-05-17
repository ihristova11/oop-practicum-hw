#ifndef BOOK_H
#define BOOK_H

#include<vector>

#include "Formula.h"

class Book
{
public: 
	void findComposition();
private:
	std::vector<Formula> formulas;
};

#endif // !BOOK_H
