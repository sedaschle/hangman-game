#include <iostream>
#include "driver.h"

//string letters[] = "abcdefghijklmnopqrstuvwxyz";
//string letters = "abcdefghijklmnopqrstuvwxyz";
//int r = 26;
// def constr
driver::driver() {
    letters = "abcdefghijklmnopqrstuvwxyz";
}

char driver::getGuess() {
    char x = letters.at(rand() % 26);
    // letters.erase(x); // this will be an issue i believe lol
    // r-= 1;

    return x;
}