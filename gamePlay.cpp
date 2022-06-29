#include <iostream>
#include "gamePlay.h"
//#include "driver.h"

string uniq;
string soln;
// def constr
gamePlay::gamePlay() {
}

// play without limit
gamePlay::gamePlay(string s) {
    alphabet* a = new alphabet(s);
    key = *a;
    
    driver* d = new driver();
    drive = *d;

    uniq = "";
    soln = "_____";
    uniques(s);

    play();
}

// play with limit
gamePlay::gamePlay(string s, int l) {
    alphabet* a = new alphabet(s);
    key = *a;
    driver* d = new driver();
    drive = *d;
    limit = l;
    uniq = "";
    uniques(s);

    play();
}


void gamePlay::round(){
    char x = drive.getGuess();
    guess(x);
}

void gamePlay::guess(char c){
    cout << "guessed: " << c << endl;
    if (!key.letGuessed(c)){
        key.markGuessed(c);
        if (uniq.find(c) != string::npos) {
            cout << "noiceee!! got one, with " << c << endl;
            vector<int> locs = key.getLetOcc(c);

            for (int i : locs) {
                string st;
                st.push_back(c);
                soln.replace(i, 1, st);
            }
            cout << "answer so far is: " << soln << endl;

        }
    } else cout << "you already guessed that :(" << endl;
}

bool gamePlay::done(){
    string guesses = key.getGuessed();

    if (guesses.size() < uniq.size()) {
        return false;
    }
    for (char c : uniq) {
        if (guesses.find(c) == string::npos) return false;
    }

    return true;
}
void gamePlay::play() {
    cout << uniq << endl;
    while (!done()) {
        round();
    }
    cout << "game over you got it!" << endl;
}

void gamePlay::uniques(string s) {
    sort(s.begin(), s.end());
    uniq = s;
    int rm = 0;
    for (int i = 1; i < s.size(); i++) {
        if (s[i] == (uniq[i-1-rm])) {
            uniq.erase(i-1-rm, 1);
            rm += 1;
        }
    }
}







