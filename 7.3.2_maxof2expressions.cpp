/* Assign to maxSum the max of (numA, numB) PLUS the max of (numY, numZ). Use just one statement. Hint: Call FindMax() twice in an expression. */

#include <iostream>

//#include <vector>
//#include <string>
//#include <cctype>
//#include <cmath>
//#include <iomanip>
//#include <cctype>
//#include <cstdlib>

using namespace std;

double FindMax(double num1, double num2)
{
    double maxVal = 0.0;

    // Note: if-else statements need not be understood to complete this activity
    if (num1 > num2)
    {                  // if num1 is greater than num2,
        maxVal = num1; // then num1 is the maxVal.
    }
    else
    {                  // Otherwise,
        maxVal = num2; // num2 is the maxVal.
    }
    return maxVal;
}

int main()
{
    double numA;
    double numB;
    double numY;
    double numZ;
    double maxSum;

    /* Your solution goes here  */
    cout << "Enter numA: " << endl;
    cin >> numA;
    cout << "Enter numB: " << endl;
    cin >> numB;
    cout << "Enter numY: " << endl;
    cin >> numY;
    cout << "Enter numZ: " << endl;
    cin >> numZ;

    maxSum = FindMax(numA, numB) + FindMax(numY, numZ);

    cout << "maxSum is: " << maxSum << endl;
    return 0;
}
