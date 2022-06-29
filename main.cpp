
#include <iostream>
#include "alphabet.h"
#include "gamePlay.h"
#include "driver.h"

gamePlay* game;
string secret; // word to guess (NO SPACES)

int main()
{
    secret = "hello";
    cout << secret << endl;
    game = new gamePlay(secret); 



    // std::cout << "hello world" << std::endl;

    // alphabet alpha; 
    // alpha = *new alphabet("hello");
    // char g;
    // g = 'a';
    // alpha.markGuessed(g);

    // vector<char> guesses = alpha.getGuessed();
    // for (int i = 0; i < guesses.size(); i++) {
    //     std::cout << guesses[i] << std::endl;
    // }
    
    // vector<int> occurs;
    // occurs = alpha.getLetOcc('l');

    // for (int i : occurs) cout << i << endl;
    return 0;

}


