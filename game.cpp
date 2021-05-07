#include "game.h"
using namespace std;
game::game()
{
	choice1 = 0;
	playing = true;
}
void game::mainMenu()
{
	
	cout << "\n";
	cout << setw(67);
	cout << "The Adventurer\n\n\n";
	cout << "Press one of the following buttons to:3 \n";
	cout << "1. Start your adventure!\n";
	cout << "0. Exit\n";
	cout << "Enter: ";
	cin >> choice1;
	switch (choice1)
	{
	case 1:
		cout << "You just begun your adventure! " << endl;
		break;
	case 0:
		cout << "I'm sorry to see you go, bye bye...";
		playing = false;
		break;
	default:
		break;
	}
	
}

/*void game::story()
{
	//while game is running, if player movement ++, go to next story
	//if player movement --, return to the previous story
	while (choice1 == 1)
	{
		if 
		st++;


	}
}*/