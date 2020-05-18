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

Formula* Book::getPhilosophersStoneFormula()
{
	Formula* res = nullptr;
	for (Formula* formula : this->validFormulas)
	{
		if (formula->getResult()->getType() == ElementType::PHILOSOPHERS_STONE)
		{
			res = formula;
			break;
		}
	}

	return res;
}

void Book::transferInternals(const std::vector<Formula*>& formulas)
{
	for (Formula* formula : formulas)
	{
		this->formulas.push_back(formula);
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
