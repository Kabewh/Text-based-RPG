#include "game.h"
#include "character.h"
#include "combat.h"
#include "enemy.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
    srand(time(NULL));
    game game;
    character character;
    enemy enemy;
    combat combat;
    game.mainMenu();

    while (game.getPlaying())
    {
        character.characterName();
        character.characterStats(character.getName());
        character.printCharacterStats();
        character.characterMovement();
        combat.combatMenu();
        enemy.recieveDamage();
        break;
    }
}



