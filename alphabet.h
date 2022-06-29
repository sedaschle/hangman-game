#ifndef _ALPHABET_H_
#define _ALPHABET_H_

#include <vector>
#include <cmath>
#include <string>
#include <map>

using namespace std;

class alphabet {

public:
    class letter{
        public:
        letter();

        //string cha; // actual character held by this letter
        bool guessed;
        vector<int> occurs;
    };

    alphabet();
    alphabet(string wd);

 //   string alf;

    string word;

    map<char, letter> letters;
    typedef map<char, letter>::iterator it;
    typedef map<char, letter>::const_iterator const_it;

    it begin() {return letters.begin();}
    it end() {return letters.end();}
    it find(char l) {return letters.find(l);}

    void initAnswer();
    void markGuessed(char c);
    void buildAlphabet();
    string getGuessed();
    bool letGuessed(char c);
    vector<int> getLetOcc(char c);
    



};






#endif