#ifndef BOOK_H
#define BOOK_H

#include<vector>

#include "Formula.h"

class Book
{
public: 
	Book();
	Book(const std::vector<Formula*>&);
	Book(const Book&);
	Book& operator=(const Book&);
	void findComposition(); // used to search within the formulas
private:
	std::vector<Formula*> formulas;

	void transferInternals(const std::vector<Formula*>&);
};

#endif // !BOOK_H
