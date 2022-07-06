#include <iostream>
#include "alphabet.h"

string alf;
// letter constructor
alphabet::letter::letter()
	:guessed(false),occurs()
	{}

// default constructor
alphabet::alphabet(){

}

// overwride constructor
alphabet::alphabet(string w){ 
	alf = "abcdefghijklmnopqrstuvwxyz";
	word = w;
	
	for (int i = 0; i < 26; i++) {
		letter* let = new letter();
		letters[alf[i]] = *let;
	}

	initAnswer();
}	

void alphabet::initAnswer(){
	it targ;
	for (int i = 0; i < word.size(); i++) {
		targ = letters.find(word[i]);
		targ->second.occurs.push_back(i);
	}
}

// mark a given letter in alphabet as "guessed"
void alphabet::markGuessed(char c){
	it here;
	here = letters.find(c);

	if (here != letters.end()) {
		here->second.guessed = true;
	}
}

// iterate through map, return letters that have been guessed so far
string alphabet::getGuessed(){
	it here;
	string guesses = "";

    for (here = letters.begin(); here != letters.end(); here++) {
        if (here->second.guessed) {
			guesses.push_back(here->first);
		}
    }
	return guesses;
}

bool alphabet::letGuessed(char c){
	return letters.find(c)->second.guessed;
}

// given character, return positions it occupies in original word or empty array if not present
vector<int> alphabet::getLetOcc(char c){
	it here = letters.find(c);
	return here->second.occurs;

}



