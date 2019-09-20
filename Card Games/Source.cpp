// Cards - foundation for card game
// Main function

#include <iostream>

#include "player.h"
#include "dealer.h"

using namespace std;

int main()
{
	cout << "\tWelcome to Cards!" << endl << endl;
	//dealer
	Dealer dlr;
	dlr.Display();
	cout << endl << endl;

	//shuffle deck
	dlr.Shuffle();
	dlr.Display();
	cout << endl << endl;
}