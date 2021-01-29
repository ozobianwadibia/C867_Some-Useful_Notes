/* Write a for loop to populate vector userGuesses with NUM_GUESSES integers. Read integers using cin. Ex: If NUM_GUESSES is 3 and user enters 9 5 2, then userGuesses is {9, 5, 2}. */

#include <iostream>
#include <vector>

//#include <string>
//#include <cmath>3
//#include <iomanip>
//#include <cctype>
//#include <cstdlib>

using namespace std;

int main()
{
    const int NUM_GUESSES = 3;
    vector<int> userGuesses(NUM_GUESSES);
    int i = 0;

    /* Your solution goes here  */

    for (i = 0; i < NUM_GUESSES; i++)
    {
        cout << "Please enter a number: ";
        cin >> userGuesses.at(i);
    }

    for (i = 0; i < NUM_GUESSES; ++i)
    {
        cout << userGuesses.at(i) << " ";
    }

    return 0;
}
