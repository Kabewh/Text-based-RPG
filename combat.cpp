#include "combat.h"
#include "character.h"

using namespace std;

combat::combat()
{
	choice = 0;
	this->activeCombat = false;
}
void combat::combatMenu()
{
	character character;
	character.characterStats();
	character.printCharacterStats();
	cout << "You encountered an enemy!!!\n\n" << endl;
	cout << "Choose what you want to do: " << endl;
	cout << "1. Attack" << endl;
	cout << "2. Block" << endl;
	cout << "3. Recover" << endl;
	cin >> (choice);
	if (choice <= 3)
	{
		this->activeCombat = true;
		if (choice == 1)
		{
			cout << "You attacked the enemy and dealt " << character.getRandomDamage() << " damage" << endl;
		}
		if (choice == 2)
		{
			if (character.getBlockDamage() == 1)
			{
				cout << "You blocked the incoming damage succesfully " << endl;
			}
			else
			{
				cout << "You failed to block the incoming damage " << endl;
			}
		}
		}
}