/* Vector testGrades contains NUM_VALS test scores. Write a for loop that sets sumExtra to the total extra credit received. Full credit is 100, so anything over 100 is extra credit. Ex: If testGrades = {101, 83, 107, 90}, then sumExtra = 8, because 1 + 0 + 7 + 0 is 8.  */

#include <iostream>
#include <vector>

//#include <string>
//#include <cmath>
//#include <iomanip>
//#include <cctype>
//#include <cstdlib>

using namespace std;

int main()
{
    const int NUM_VALS = 4;
    vector<int> testGrades(NUM_VALS);
    int i = 0;
    int sumExtra = -9999; // Assign sumExtra with 0 before your for loop

    testGrades.at(0) = 101;
    testGrades.at(1) = 83;
    testGrades.at(2) = 107;
    testGrades.at(3) = 90;

    /* Your solution goes here  */
    sumExtra = 0;
    for (i = 0; i < NUM_VALS; i++)
    {
        if ((testGrades.at(i) - 100) > 0)
        {
            sumExtra = sumExtra + (testGrades.at(i) - 100);
        }
    }

    cout << "sumExtra: " << sumExtra << endl;

    return 0;
}
