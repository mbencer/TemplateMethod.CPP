// ReSharper disable All
#include "Party.h"
#include <iostream>

void Party::GoToBeforeParty() const
{
	std::cout << "I go to a house party! \n";
}

void Party::GoToAfterParty() const
{
	std::cout << "I go drink to a park! \n";
}

void Party::GoToParty()
{
	GoToBeforeParty();
	DrinkInClub();
	GoToAfterParty();
}
