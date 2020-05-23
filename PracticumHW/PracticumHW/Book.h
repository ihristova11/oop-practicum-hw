#ifndef BOOK_H
#define BOOK_H

#include<vector>

#include "Formula.h"

class Book
{
public: 
	Book(const std::vector<Formula*>&);
	Book(const Book&);
	Book& operator=(const Book&);

	std::vector<Element*> splitElements;
	std::vector<Element*> allElements;

	Element* getElement(ElementType);
	Formula* getFormula(Element*);

private:
	std::vector<Formula*> formulas;
	std::vector<Formula*> validFormulas;
	void validateFormulas(); // seeds validFormulas
};

#endif // !BOOK_H
