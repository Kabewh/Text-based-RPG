#include "enemy.h"
#include "character.h"
#include "combat.h"

enemy::enemy()
{
	this->deathState = false;
	this->hp = 0;
	this->hpMax = 0;
	this->damageMin = 0;
	this->damageMax = 0;
	this->lvl = 0;
}
void enemy::enemyStats()
{
	character character;
	this->hp = 120;
	this->hpMax = 120;
	this->damageMin = 15;
	this->damageMax = 40;
	this->lvl = character.getLvl() + 1;
}
void enemy::printEnemyStats()
{
	{
		cout << right << setw(77) << "Name: Goblin" << endl;
		cout << right << setw(70) << "Lvl: " << this->lvl << endl;
		cout << right << setw(69) << "Hp: " << this->hp << "/" << this->hpMax << endl;
	}
}

void enemy::recieveDamage()
{	
	this->hp -= this->damageMax;
	if (this->hp <= 0)
	{
		this->hp = 0;
	}
}
void enemy::death()
{
	character character;
	combat combat;
	if (this->hp <= 0)
	{
		this->hp = 0;
		this->deathState = true;
	}
}
