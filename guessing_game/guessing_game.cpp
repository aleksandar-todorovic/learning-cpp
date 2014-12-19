// guessing_game.cpp: Aleksandar Todorović
// Description: A simple guessing game.

#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main ()
{
    int number, guess;

    srand (time(NULL));

    number = rand() % 100 + 1;

    cout << "Guess our number (1 to 100)" << endl;
    do {
        if (!(cin >> guess)) {
            cout <<"Please enter numbers only" << endl;
        } else {
            if (number > guess) cout << "The number is higher than " << guess << endl;
            if (number < guess) cout << "The number is lower than " << guess << endl;
        }
    } while (guess != number);

    cout << "Good job! The number was " << number << " :)" << "" << endl;

    return 0;
}
