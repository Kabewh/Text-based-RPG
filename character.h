#pragma once
#include <iostream>
#include <stdlib.h>
#include <ctime>
#include <string>


class character
{
public:
	character();
	void characterName();
	void characterStats();
	void characterMovement();
	void printCharacterStats();
	//void combatMenu();
	inline const bool getPlaying() const { return this->playing; }
	inline const bool getResting() const { return this->resting; }
	//inline const string& getName() const { return this->name; }
	inline const int& getHp() const { return this->hp; }
	inline const int& getHpMax() const { return this->hpMax; }
	inline const int& getRandomDamage() const { return this->randomDamage; }
	inline const int& getBlockDamage() const { return this->blockDamage; }
	inline const int& getChoice2() const { return this->choice2; }
	inline const int& getChoice3() const { return this->choice3; }
	inline const int& getMove() const { return this->move; }
	inline const int& getLvl() const { return this->lvl; }
	inline const int& getExp() const { return this->exp; }
	inline const int& getExpNext() const { return this->expNext; }

private:
	char name[20];
	int lvl;
	int exp;
	int expNext;
	int hp;
	int hpMax;
	int damageMin;
	int damageMax;
	int randomDamage;
	int blockDamage;

	int move;
	int range;

	bool gstart;

	int choice2;
	int choice3;
	
	//bool combat;
	bool resting;
	bool playing;
};

