#include <iostream>
#include <vector>

#include "Alchemist.h"
#include "Book.h"
#include "Element.h"

int main()
{
    std::vector<Formula> formulas;
    Book book(formulas);
    Alchemist alchemist(book);

    std::cout << alchemist.canComposePhilosophersStone();
}