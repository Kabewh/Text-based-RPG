#include "combat.h"
#include "character.h"
#include "enemy.h"

using namespace std;

combat::combat()
{
	this->choice = 0;
	choice2 = 0;
	this->activeCombat = false;
	counter = 0;
}
void combat::combatMenu()
{
	character character;
	enemy enemy;
	enemy.enemyStats();
	character.characterStats(character.getName());//not working wtf
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
				enemy.printEnemyStats();
				cout << "1. Attack" << endl;
				cout << "2. Block" << endl;
				cout << "3. Flee" << endl;
				cout << "You attacked the enemy and dealt " << enemy.getDamageMax() << " damage\n\n" << endl;
				cout << "The enemy attacked you and dealt " << enemy.getDamageMin() << " damage" << endl;
				enemy.death();
				enemy.getDropExp();
				break;
			
			case 2:
				if (character.getBlockDamage() == 1)
				{
					cout << "You blocked the incoming damage succesfully " << endl;
				}
				else
				{
					cout << "You failed to block the incoming damage " << endl;
				}
				break;
			case 3:
				cout << "Exiting combat..." << endl;
				this->activeCombat = false;
				break;
			}
			//cout << this->activeCombat;
	}
}


