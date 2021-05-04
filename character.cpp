#include "combat.h"
#include "character.h"
using namespace std;
//movement, enemy, refresh stats, do/take damage
character::character()
{
	this->playing = true;
	this->resting = false;
	this->randomDamage = 0;
	this->blockDamage = 0;
	this->choice2 = 0;
	this->choice3 = 0;
	this->move = 0;
	this->lvl = 0;
	this->exp = 0;
	this->expNext = 0;
	this->hp = 0;
	this->hpMax = 0;
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
	this->lvl = 1;
	this->exp = 0;
	this->expNext = 20;
	this->hp = 180;
	this->hpMax = 200;
	damageMin = 30;
	damageMax = 50;
	this->randomDamage = damageMin + rand() % ((damageMax + 1) - damageMin);
	this->blockDamage = rand() % 2;
	
}

void character::printCharacterStats()
{
	if (this->hp == 0)
	{
		cout << "YOU DIED" << endl;
		playing = false;
	}
	else if (playing == true)
	{
		cout << "Name: " << name << endl;
		cout << "Lvl: " << this->lvl << endl;
		cout << "Exp: " << this->exp << "/" << this->expNext << endl;
		cout << "Hp: " << this->hp << "/" << this->hpMax << endl;
	}
}
void character::characterMovement()
{
	combat combat;
	while (playing == true)
	{
		if (this->choice2 <= 3)
		{
			cout << "\n\n\n\n\n(1) Move forward (2) Move backwards (3) Rest " << endl;
		}
		
		cin >> this->choice2;
		if (this->choice2 == 1)
		{
			system("CLS");
			characterStats();
			cout << "\n\n\n\nYou're moving forwards..." << endl;
			this->move++;
			if (this->move == 3)
			{
				combat.combatMenu();
			}
		}
		if (this->choice2 == 2)
		{
			system("CLS");
			characterStats();
			cout << "\n\n\n\nYou're moving backwards..." << endl;
			this->move--;
		}
		if (this->choice2 == 3)
		{
			system("CLS");
			cout << "Name: " << name << endl;
			cout << "Lvl: " << this->lvl << endl;
			cout << "Exp: " << this->exp << "/" << this->expNext << endl;
			cout << "Hp: " << this->hp << "/" << this->hpMax << endl;
			cout << "\n\n\n\nYou're resting..." << endl;
			resting = true;
			if (this->hp < this->hpMax)
			{
				this->hp += 5 * this->lvl;
			}
		}
	}
}

/*void character::combatMenu()
{
	cout << "You encountered an enemy!!!" << endl;
	cout << "Choose what you want to do: " << endl;
	cout << "1. Attack" << endl;
	cout << "2. Block" << endl;
	cout << "3. Recover" << endl;
	cin >> choice3;
	if (choice3 <= 3)
	{
		if (choice3 == 1)
		{
			cout << "You attacked the enemy and dealt " << randomDamage << " damage" << endl;
		}
		if (choice3 == 2)
		{
			if (blockDamage == 1)
			{
				cout << "You blocked the incoming damage succesfully " << endl;
			}
			else
			{
				cout << "You failed to block the incoming damage " << endl;
			}
		}
	
	}
}*/