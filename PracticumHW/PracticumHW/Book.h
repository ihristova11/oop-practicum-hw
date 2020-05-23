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
	~Book();

	std::vector<Element*> splitElements;

	Element* getElement(ElementType);
	Formula* getFormula(Element*);
	std::vector<Formula*> getValidFormulas();
private:
	std::vector<Formula*> formulas;
	std::vector<Formula*> validFormulas;

	void validateFormulas(); // seeds validFormulas
};

#endif // !BOOK_H
