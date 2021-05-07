#pragma once
#include<iostream>
#include<string>
#include<iomanip>
#include<ctime>

class combat
{
public:
	combat();
	void combatMenu();
	inline const bool getActiveCombat() const { return this->activeCombat; }
private:
	int choice;
	int choice2;
	bool activeCombat;
	int counter;
};

