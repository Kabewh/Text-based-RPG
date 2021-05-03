#include "character.h"
#include <iostream>
#include <stdlib.h>
//#include <string>
using namespace std;

character::character()
{
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
	cout << "Welcome: " << name << flush << endl;
	system("CLS");

}

void character::characterStats()
{
	lvl = 1;
	exp = 0;
	expNext = 20;
	hp = 200;
	hpMax = 200;
	damageMin = 30;
	damageMax = 50;

	cout << "Name: " << name << endl;
	cout << "Lvl: " << lvl << endl;
	cout << "Exp: " << exp << endl;
	cout << "Hp: " << hp << "/" << hpMax << endl;
}