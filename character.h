#pragma once
#include <iostream>
#include <stdlib.h>
class character
{
public:
	character();
	void characterName();
	void characterStats();
	void characterMovement();
	void combatMenu();
	inline bool getPlaying() const { return this->playing; }
	inline bool getResting() const { return this->resting; }
	inline bool getCombat() const { return this->combat; }
	inline int getMove() const { return this->move; }
private:
	char name[20];

	int lvl;
	int exp;
	int expNext;
	int hp;
	int hpMax;
	int damageMin;
	int damageMax;

	int move;

	bool gstart;

	int choice2;
	
	bool combat;
	bool resting;
	bool playing;
};

