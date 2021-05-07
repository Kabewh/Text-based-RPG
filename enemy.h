#pragma once
#include<iostream>
#include<string>
#include<iomanip>
#include<ctime>


class enemy
{
public:
	enemy();
	void enemyStats();
	void printEnemyStats();
	void death();
	void recieveDamage();
	inline const int& getHp() { return this->hp; }
	inline const int& getHpMax() const { return this->hpMax; }
	inline const int& getDamageMin() const { return this->damageMin; }
	inline const int& getDamageMax() const { return this->damageMax; }
	inline const int& getLvl() const { return this->lvl; }
	inline const int& getDropExp() const { return this->dropexp; }
private:
	int hp;
	int hpMax;
	int damageMin;
	int damageMax;
	int lvl;
	int dropexp;
};

