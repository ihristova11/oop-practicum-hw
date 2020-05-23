#include "Book.h"

Book::Book(const std::vector<Formula*>& formulas)
{
	this->formulas = formulas;
	this->validateFormulas();
}

Book::Book(const Book& other)
{
	this->formulas = other.formulas;
	this->validFormulas = other.validFormulas;
	this->splitElements = other.splitElements;
}

Book& Book::operator=(const Book& other)
{
	if (this != &other)
	{
		this->formulas = other.formulas;
		this->validFormulas = other.validFormulas;
		this->splitElements = other.splitElements;
	}

	return *this;
}

Book::~Book()
{
	this->validFormulas.clear();
	this->formulas.clear();
}

Element* Book::getElement(ElementType et)
{
	for (Formula* f : this->formulas)
	{
		if (f->getResult()->getType() == et)
		{
			return f->getResult();
		}
	}
	return nullptr;
}

Formula* Book::getFormula(Element* e)
{
	for (Formula* formula : this->validFormulas)
	{
		if (formula->getResult() != nullptr 
			&& formula->getResult()->toString() == e->toString())
		{
			return formula;
		}
	}
	return nullptr;
}

std::vector<Formula*> Book::getValidFormulas()
{
	return this->validFormulas;
}

void Book::validateFormulas()
{
	for (Formula* formula : this->formulas)
	{
		if (formula->isValid())
		{
			this->validFormulas.push_back(formula);
		}
	}
}
