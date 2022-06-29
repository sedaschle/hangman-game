#ifndef _CONSOLEUI_H_
#define _CONSOLEUI_H_

#include <iostream>
#include <string>


using namespace std;

class consoleUI {

public:
    consoleUI();
    consoleUI(string s);
    string curr;

    void start();
    char playRound();
    void postRound(bool b, string s);
    void over();

};


#endif