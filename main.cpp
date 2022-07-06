
#include <iostream>
#include "alphabet.h"
#include "gamePlay.h"
#include "driver.h"

gamePlay* game;
string secret; // word to guess (NO SPACES)

int main()
{
    secret = "YOUR-SECRET-HERE";
    game = new gamePlay(secret); 


    return 0;

}


