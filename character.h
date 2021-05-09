#pragma once
#include <iostream>
#include <stdlib.h>
#include <ctime>
#include <string>

using namespace std;

class character
{
public:
	character();
	void characterName();
	void characterStats(const std::string name);
	void characterMovement();
	void printCharacterStats();
	void recieveDamage();
	void recieveExp();
	inline const bool getPlaying() const { return this->playing; }
	inline const bool getResting() const { return this->resting; }
	inline const std::string& getName() const { return this->name; }
	inline const int& getHp() { return this->hp; }
	inline const int& getHpMax() const { return this->hpMax; }
	inline const int& getRandomDamage() const { return this->randomDamage; }
	inline const int& getBlockDamage() const { return this->blockDamage; }
	inline const int& getDamageMin() const { return this->damageMin; }
	inline const int& getDamageMax() const { return this->damageMax; }
	inline const int& getChoice2() const { return this->choice2; }
	inline const int& getChoice3() const { return this->choice3; }
	inline const int& getMove() const { return this->move; }
	inline const int& getLvl() const { return this->lvl; }
	inline const int& getExp() const { return this->exp; }
	inline const int& getExpNext() const { return this->expNext; }

private:
	std::string name;
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
	
	bool resting;
	bool playing;
};

