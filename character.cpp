#include "combat.h"
#include "character.h"
#include "enemy.h"

character::character()
{
	this->name = name;
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
	this->damageMin = 0;
	this->damageMax = 0;
}
void character::characterName()
{
	cout << "What is your name?" << endl;
	cin >> this->name;
	cout << "Welcome: " << this->name << endl;
	system("CLS");
	
}

void character::characterStats(const std::string name)
{
	this->name = name;
	this->lvl = 1;
	this->exp = exp;
	this->expNext = exp + 20;
	this->hp = 180;
	this->hpMax = 200;
	this->damageMin = 10;
	this->damageMax = 20;
	this->randomDamage = this->damageMin + rand() % ((this->damageMax + 1) - this->damageMin);
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
		cout << "Name: " << this->name << endl;
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
		if (combat.getActiveCombat() == false)
		{
			cout << "\n\n\n\n\n(1) Move forward (3) Rest " << endl;
		}
		cin >> this->choice2;
		if (this->choice2 == 1)
		{
			system("CLS");
			cout << "\n\n\n\nYou're moving forwards..." << endl;
			this->move++;
			if (this->move % 3 == 0)
			{
				system("CLS");
				combat.combatMenu();
			}
		}
		
		if (this->choice2 == 3)
		{
			system("CLS");
			cout << "Name: " << this->name << endl;
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

void character::recieveDamage()
{
	enemy enemy;
	this->hp -= this->randomDamage;
	if (this->hp <= 0)
	{
		this->hp = 0;
	}
}

void character::recieveExp()
{
	enemy enemy;
	this->exp += 4;
	if (this->exp >= this->expNext)
	{
		this->lvl++;
		this->exp = 0;
	}
}