#include "character.h"
using namespace std;
//movement, enemy, refresh stats, do/take damage
character::character()
{
	playing = true;
	combat = false;
	resting = false;
	lvl = 0;
	exp = 0;
	expNext = 0;
	hp = 0;
	hpMax = 0;
	damageMin = 0;
	damageMax = 0;
}
void character::characterName()
{
	cout << "What is your name?" << endl;
	cin >> name;
	cout << "Welcome: " << name << endl;
	system("CLS");
	
}

void character::characterStats()
{
	lvl = 1;
	exp = 0;
	expNext = 20;
	hp = 180;
	hpMax = 200;
	damageMin = 30;
	damageMax = 50;
	if (hp == 0)
	{
		cout << "YOU DIED" << endl;
		playing = false;
	}
	else if (playing == true)
	{
		cout << "Name: " << name << endl;
		cout << "Lvl: " << lvl << endl;
		cout << "Exp: " << exp << "/" << expNext << endl;
		cout << "Hp: " << hp << "/" << hpMax << endl;
	}
	
}

void character::characterMovement()
{
	while (playing == true)
	{
		this->move = 0;
		choice2 = 0;
		while (choice2 <= 3)
		{
			cout << "\n\n\n\n\n(1) Move forward (2) Move backwards (3) Rest " << endl;
			break;
		}
		
		cin >> choice2;
		switch (choice2)
		{
		case 1:
			system("CLS");
			characterStats();
			cout << "\n\n\n\nYou're moving forwards..." << endl;
			this->move++;
			cout << this->move;
			break;
		case 2:
			system("CLS");
			characterStats();
			cout << "\n\n\n\nYou're moving backwards..." << endl;
			this->move--;
			break;
		case 3:
			system("CLS");
			cout << "Name: " << name << endl;
			cout << "Lvl: " << lvl << endl;
			cout << "Exp: " << exp << "/" << expNext << endl;
			cout << "Hp: " << hp << "/" << hpMax << endl;
			cout << "\n\n\n\nYou're resting..." << endl;
			resting = true;
			if (hp < hpMax)
			{
				hp += 5 * lvl;
			}
		}
	}
}

void character::combatMenu()
{
	if (move = 3)
	{
		combat = true;
		cout << "Choose what you want to do: " << endl;
		cout << "1. Attack" << endl;
		cout << "2. Block" << endl;
		cout << "3. Recover" << endl;
	}
}