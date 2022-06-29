#include <iostream>
#include "consoleUI.h"

string answer;

consoleUI::consoleUI() {}

consoleUI::consoleUI(string s){
    answer = s;
    
    char c = '_';
    int l = s.size();
    curr = string(l, c);

}

void consoleUI::start(){
    cout << "Welcome to Hell" << endl;
    cout << "The word you are trying to guess is " << answer.size();
    cout << " letters long. Good luck -> if you fail i DIE! >:)" << endl;

}

char consoleUI::playRound() {
    char ret;

    cout << "What is your guess?" << endl;

    cin >> ret;

    return ret;
}

void consoleUI::postRound(bool b, string s){
    if (b) {
        cout << "Nice work! \n";
        cout << "Word: " << s << endl;
    }
    else {
        cout << "get it together dummy" << endl;
    }
}

void consoleUI::over(){
    cout << "game over i SSURVIVEDDD!!!\n";
    cout << "the word was " << answer << endl;

}

