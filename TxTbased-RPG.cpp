#include "game.h"
#include "character.h"
#include "combat.h"
#include <iostream>
using namespace std;

int main()
{
    srand(time(NULL));
    game game;
    character character;
    combat combat;
    game.mainMenu();

    while (game.getPlaying())
    {
        character.characterName();
        character.characterStats();
        character.printCharacterStats();
        character.characterMovement();
        combat.combatMenu();
        break;
    }
}

