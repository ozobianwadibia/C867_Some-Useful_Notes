/*  Write a function SwapArrayEnds() that swaps the first and last elements of the function's array parameter. Ex: sortArray = {10, 20, 30, 40} becomes {40, 20, 30, 10}. The array's size may differ from 4.
*/
#include <iostream>

//#include <vector>
//#include <string>
//#include <cctype>
//#include <cmath>
//#include <iomanip>
//#include <cctype>
//#include <cstdlib>

using namespace std;

/* Your solution goes here  */
int *SwapArrayEnds(int testArray[], int arrayLength)
{
    int tempVal = 0;

    if (arrayLength <= 1)
    {
        cout << "Too short" << endl;
    }
    else
    {
        tempVal = testArray[0];
        testArray[0] = testArray[arrayLength - 1];
        testArray[arrayLength - 1] = tempVal;
        return testArray;
    }
}

int main()
{

    const int SORT_ARR_SIZE = 4;
    int sortArray[SORT_ARR_SIZE];
    int i = 0;

    sortArray[0] = 10;
    sortArray[1] = 20;
    sortArray[2] = 30;
    sortArray[3] = 40;

    SwapArrayEnds(sortArray, SORT_ARR_SIZE);

    for (i = 0; i < SORT_ARR_SIZE; ++i)
    {
        cout << sortArray[i] << " ";
    }
    cout << endl;

    return 0;
}