/* Find the maximum value and minimum value in milesTracker. Assign the maximum value to maxMiles, and the minimum value to minMiles. Sample output for the given program:
Min miles: -10
Max miles: 40 */

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
    const int NUM_ROWS = 2;
    const int NUM_COLS = 2;
    int milesTracker[NUM_ROWS][NUM_COLS];
    int i;
    int j;
    int maxMiles; // Assign with first element in milesTracker before loop
    int minMiles; // Assign with first element in milesTracker before loop

    milesTracker[0][0] = -10;
    milesTracker[0][1] = 20;
    milesTracker[1][0] = 30;
    milesTracker[1][1] = 40;

    /* Your solution goes here  */
    minMiles = milesTracker[0][0];
    maxMiles = milesTracker[0][0];

    for (i = 0; i < NUM_ROWS; ++i)
    {
        for (j = 0; j < NUM_COLS; ++j)
        {
            if (i == 0 && j == 0) // this for when there is only one item
            {
                maxMiles = milesTracker[i][j];
                minMiles = milesTracker[i][j];
            }
            if (milesTracker[i][j] > maxMiles) // what happens when first item is already the smallest?
            {
                maxMiles = milesTracker[i][j]; // works in some cases???
            }
            else
            {
                minMiles = milesTracker[i][j];
            }
        }
    }
    cout << "Min miles: " << minMiles << endl;
    cout << "Max miles: " << maxMiles << endl;

    return 0;
}
