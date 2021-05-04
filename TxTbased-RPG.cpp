#include "game.h"
#include "character.h"
#include <iostream>
using namespace std;

int main()
{
    srand(time(NULL));
    game game;
    character character;
    game.mainMenu();

while (game.getPlaying())
{
    character.characterName();
    character.characterStats();
    //game.combatMenu();
    character.characterMovement();
    character.combatMenu();
    break;
    //character.characterMovement();
}
while (character.getPlaying())
{
    //character.characterStats();
    break;
}
    return 0;

}


