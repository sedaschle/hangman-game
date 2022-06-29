#ifndef _GAMEPLAY_H_
#define _GAMEPLAY_H_

#include "alphabet.h"
#include "driver.h"
#include "ui/consoleUI.h"
#include <vector>
#include <cmath>
#include <string>
#include <map>

using namespace std;

class gamePlay {

public:
    gamePlay();
    gamePlay(string s);
    // gamePlay(string s, int l);

    int limit;
    string uniq;
    alphabet key;
    driver drive;
    consoleUI console;

    void round();
    void guess(char c);

   
   // char uniques;
    bool done();
    void play();

    void uniques(string s);
    


};


#endif