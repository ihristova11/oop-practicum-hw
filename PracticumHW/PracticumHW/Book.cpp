#include "Book.h"

Book::Book(const std::vector<Formula*>& formulas)
{
	this->formulas = formulas;
	this->validateFormulas();
}

Book::Book(const Book& other)
{
	//this->transferInternals(other.formulas);
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
		if (formula->getResult() != nullptr && formula->getResult()->toString() == e->toString()) // or tostring()
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

std::vector<Element*> Book::getAllElements()
{
	return this->allElements;
}

void Book::setAllElements(std::vector<Element*> elements)
{
	for (Element* el : elements)
	{
		this->allElements.push_back(el);
	}
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
