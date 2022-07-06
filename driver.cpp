#include <iostream>
#include "driver.h"

// only used in automated gameplay
driver::driver() {
    letters = "abcdefghijklmnopqrstuvwxyz";
}

char driver::getGuess() {
    char x = letters.at(rand() % 26);

    return x;
}