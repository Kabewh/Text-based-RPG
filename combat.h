#pragma once
#include<iostream>
#include<string>
#include<iomanip>
#include<ctime>

using namespace std;

class combat
{
public:
	combat();
	void combatMenu();
	inline const bool getActiveCombat() const { return this->activeCombat; }
private:
	int choice;
	int choice2;
	int counter;

	bool activeCombat;
};

