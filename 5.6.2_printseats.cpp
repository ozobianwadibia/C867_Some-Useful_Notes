/* Given numRows and numCols, print a list of all seats in a theater. Rows are numbered, columns lettered, as in 1A or 3E. Print a space after each seat, including after the last. Ex: numRows = 2 and numCols = 3 prints:
1A 1B 1C 2A 2B 2C  */

#include <iostream>

using namespace std;

int main()
{
    int numRows;
    int numCols;

    cout << "Please, enter number of rows: ";
    cin >> numRows;

    cout << "Please, enter number of columns: ";
    cin >> numCols;

    // Note: You'll need to declare more variables
    int firstNum = 1;
    int secondLetter = 65;
    int secondLetterLimit = secondLetter + numCols; // from ASCII table of values

    /* Your solution goes here  */
    cout << "The available seats are: " << endl;
    for (int firstNum = 1; firstNum <= numRows; firstNum++)
    {
        for (secondLetter = 65; secondLetter < secondLetterLimit; secondLetter++)
        {
            cout << firstNum << (char)secondLetter << " ";
        }
    }

    return 0;
}
