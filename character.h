#pragma once

class character
{
public:
	character();
	void characterName();
	void characterStats();

private:
	char name[20];
	int lvl;
	int exp;
	int expNext;
	int hp;
	int hpMax;
	int damageMin;
	int damageMax;

};

