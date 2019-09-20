// Cards - foundation for card game
// Main function

#include <iostream>
#include <cctype>
#include <string>
#include <iomanip>
#include "player.h"
#include "dealer.h"

using namespace std;

int mainMenu();
void playAgain();

int main()
{
	mainMenu();

	system("CLS");
	cout << "Goodbye!" << endl;
	return 0;
}

int mainMenu()
{
	string option;
	bool correct = false;

	cout << "\tGame Menu" << endl;
	cout << "1. Card game 1" << endl;
	cout << "2. Card game 2" << endl;
	cout << "3. Quit" << endl << endl;


	do
	{
		cout << "Enter Choice: ";
		cin >> option;
		cout << endl;
		if (option == "1")
		{
			cout << "You chose Card game 1." << endl;
			correct = true;
			system("pause");
			system("CLS");
			//dlr game 1
			playAgain();
		}
		else if (option == "2")
		{
			cout << "You chose Card game 2." << endl;
			correct = true;
			system("pause");
			system("CLS");
			//dlr game 2
			playAgain();
		}
		else if (option == "3")
		{
			correct = true;
			return 0;
		}
		else
		{
			system("CLS");
			cout << "\tGame Menu" << endl;
			cout << "1. Card game 1" << endl;
			cout << "2. Card game 2" << endl;
			cout << "3. Quit" << endl << endl;
			cout << "Please select a correct option!" << endl;
		}
	} while (!correct);
}

void playAgain()
{
	int i = 0;
	char answer[100];
	string playAgain;


	do
	{
		cout << "Play another game? (y/n): ";
		cin.getline(answer, 100);			//finds input (spaces included) up to 100 characters
		playAgain = answer;					//checks first character of answer
		for (int i = 0, n = playAgain.size(); i < n; i++)
		{
			playAgain[i] = tolower(playAgain[i]);		//sets all inputs to lowercase
		}
		system("CLS");
	} while (playAgain[i] != 'y' && playAgain[i] != 'n');	//if answer isn't y or n, loop

	if (playAgain[i] == 'y')
	{
		mainMenu();
	}
	else
	{
		return;
	}
}

