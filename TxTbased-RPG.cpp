#include "game.h"
#include "character.h"
#include <iostream>
using namespace std;

int main()
{
    game game;
    game.mainMenu();
    character character;
    character.characterName();
    character.characterStats();
  
    return 0;
}
