#include "Book.h"

Book::Book()
{ }

Book::Book(const std::vector<Formula*>& formulas)
{
	this->transferInternals(formulas);
}

Book::Book(const Book& other)
{
	this->transferInternals(other.formulas);
}

Book& Book::operator=(const Book& other)
{
	if (this != &other)
	{
		this->transferInternals(other.formulas);
	}

	return *this;
}

void Book::transferInternals(const std::vector<Formula*>& formulas)
{
	for (Formula* formula: formulas)
	{
		this->formulas.push_back(formula);
	}
}

void Book::validateFormulas()
{
	// for each formula - check if the elements in vector can interact with each other
	for (Formula* formula: this->formulas)
	{
		// if can interact 
		this->validFormulas.push_back(formula);
	}
}
