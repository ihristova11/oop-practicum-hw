#include <iostream>
#include <vector>

#include "Alchemist.h"
#include "Book.h"
#include "Equation.h"
#include "Decomposition.h"

#include "Element.h"
#include "Air.h"
#include "Spirit.h"
#include "Metal.h"
#include "Stone.h"
#include "Gold.h"
#include "Energy.h"
#include "PhilosophersStone.h"

int main()
{
	std::vector<Formula*> formulas =
	{
		new Equation(std::vector<Element*> { new Air, new Air}, new Spirit),
		new Equation(std::vector<Element*> {new Metal, new Stone}, new Gold),
		new Equation(std::vector<Element*> {new Fire, new Earth}, new Metal),
		new Equation(std::vector<Element*> {new Fire, new Water, new Earth}, new Gold),
		new Equation(std::vector<Element*> {new Water, new Earth}, new Stone),
		new Equation(std::vector<Element*> {new Spirit, new Air}, new Energy),
		new Equation(std::vector<Element*> {new Gold, new Spirit, new Earth}, new PhilosophersStone),
		new Decomposition(new Fire),
			   new Equation(std::vector<Element*> {new Energy, new Earth}, new Stone)
	};
	Book book(formulas);
	Alchemist alchemist(book);

	std::cout << alchemist.canComposePhilosophersStone() << std::endl;
}