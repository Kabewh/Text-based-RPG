#include "combat.h"
#include "character.h"
#include "enemy.h"


combat::combat()
{
	this->activeCombat = false;
	this->choice = 0;
	choice2 = 0;
	counter = 0;
}
void combat::combatMenu()
{
	character character;
	enemy enemy;
	enemy.enemyStats();
	character.characterStats(character.getName());
	character.printCharacterStats();
	enemy.printEnemyStats();
	cout << "You encountered an enemy!!!\n\n" << endl;
	this->activeCombat = true;
	cout << "Choose what you want to do: " << endl;
	cout << "1. Attack" << endl;
	cout << "2. Block" << endl;
	cout << "3. Exit combat" << endl;
	while (this->activeCombat == true)
	{
		cin >> (choice);
			switch (choice)
			{
			case 1:
				system("CLS");
				enemy.recieveDamage();
				character.recieveDamage();
				character.printCharacterStats();
				character.characterStats(character.getName());
				enemy.printEnemyStats();
				cout << "1. Attack" << endl;
				cout << "2. Block" << endl;
				cout << "3. Exit combat" << endl;
				cout << "You attacked the enemy and dealt " << enemy.getDamageMax() << " damage\n\n" << endl;
				cout << "The enemy attacked you and dealt " << enemy.getDamageMin() << " damage" << endl;
				enemy.death();
				if (enemy.getDeathState() == true)
				{
					system("CLS");
					character.recieveExp();
					character.printCharacterStats();
					cout << "Enemy killed, you gained " << character.getExp() << " xp" << endl;
					this->activeCombat = false;
				}
				break;
			
			case 2:
				if (character.getBlockDamage() == 1)
				{
					cout << "You blocked the incoming damage succesfully and took no damage" << endl;
				}
				else
				{
					cout << "You failed to block the incoming damage and took some damage " << endl;
					character.recieveDamage();
				}
				break;
			case 3:
				system("CLS");
				cout << "Exiting combat..." << endl;
				this->activeCombat = false;
				break;
			}
	}
}


