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
    cout << "Welcome to Hangman" << endl;
    cout << "The word you are trying to guess is " << answer.size();
    cout << " letters long. Good luck!" << endl;

}

char consoleUI::playRound() {
    char ret;

    cout << "What letter do you guess?" << endl;

    cin >> ret;

    return ret;
}

void consoleUI::postRound(bool b, string s){
    if (b) {
        cout << "Nice work! \n";
        cout << "Word: " << s << endl;
    }
    else {
        cout << "Sorry - that's not right!" << endl;
    }
}

void consoleUI::over(){
    cout << "Game over - you saved me!\n";
    cout << "The word was " << answer << endl;

}

