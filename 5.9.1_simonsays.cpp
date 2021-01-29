/*"Simon Says" is a memory game where "Simon" outputs a sequence of 10 characters (R, G, B, Y) and the user must repeat the sequence. Create a for loop that compares the two strings starting from index 0. For each match, add one point to userScore. Upon a mismatch, exit the loop using a break statement. Ex: The following patterns yield a userScore of 4:
simonPattern: RRGBRYYBGY
userPattern:  RRGBBRYBGY */

#include <iostream>
#include <string>
// #include <cmath>
// #include <iomanip>
// #include <cctype>
// #include <cstdlib>

using namespace std;

int main()
{
    string simonPattern;
    string userPattern;
    int userScore = 0;
    int i = 0;

    userScore = 0;
    simonPattern = "RRGBACRYYBGY";
    userPattern = "RRGBACBRYBGY";

    // two variables in the same for loop statement
    for (int i = 0, j = 0; i < simonPattern.length() && j < userPattern.length(); i++, j++)
    {

        if (simonPattern[i] == userPattern[i])
        {
            userScore = userScore + 1;
        }
        if (simonPattern[i] != userPattern[i])
        {
            break;
        }
    }

    cout << "userScore: " << userScore << endl;

    return 0;
}
