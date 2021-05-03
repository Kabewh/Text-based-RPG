#include "game.h"
#include <iostream>
#include<string>
#include<iomanip>

using namespace std;
game::game()
{
	
}
void game::mainMenu()
{
	choice1 = 0;
	cout << "\n";
	cout << setw(67);
	cout << "The Adventurier\n\n" << endl;
	cout << "Press one of the following buttons to: \n";
	cout << "1. Start your adventure!\n";
	cout << "2. Exit\n";
	cout << "Enter: ";
	cin >> choice1;
	if (choice1 == 1)
	{
		cout << "You just begun your adventure! " << endl;
	}
	else if (choice1 == 2)
	{
		cout << "I'm sorry to see you go, bye bye...";
	}
}
