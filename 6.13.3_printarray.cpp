/*  Write a for loop to print all elements in courseGrades, following each element with a space (including the last). Print forwards, then backwards. End each loop with a newline. Ex: If courseGrades = {7, 9, 11, 10}, print:
7 9 11 10 
10 11 9 7  */

#include <iostream>
#include <vector>
#include <string>

//#include <cmath>
//#include <iomanip>
//#include <cctype>
//#include <cstdlib>

using namespace std;

int main()
{
    const int NUM_VALS = 4;
    int courseGrades[NUM_VALS];
    int i = 0;

    courseGrades[0] = 7;
    courseGrades[1] = 9;
    courseGrades[2] = 11;
    courseGrades[3] = 10;

    /* Your solution goes here  */
    for (i = 0; i < NUM_VALS; i++)
    {
        cout << courseGrades[i] << " ";
    }
    cout << "\n";

    for (i = NUM_VALS - 1; i >= 0; i--)
    {
        cout << courseGrades[i] << " ";
    }
    cout << "\n";

    return 0;
}
