#include "Book.h"

Book::Book()
{ }

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

Element* Book::getPhilosophersStone()
{
	for (Formula* f : this->formulas)
	{
		if (f->getResult()->getType() == ElementType::PHILOSOPHERS_STONE)
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
