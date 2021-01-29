

#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
#include <cctype>
#include <cstdlib>

using namespace std;

int main()
{
    const int INIT_SAVINGS = 10000;    // Initial savings
    const double INTEREST_RATE = 0.05; // Interest rate
    int userYears = 0;                 // User input of number of years
    int i = 0;                         // Loop variable
    double currSavings = 0.0;          // Savings with interest

    cout << "Initial savings of $" << INIT_SAVINGS << endl;
    cout << "at " << INTEREST_RATE << " yearly interest." << endl
         << endl;

    cout << "Enter years: ";
    cin >> userYears;

    currSavings = INIT_SAVINGS;
    i = 1;
    while (i <= userYears)
    {
        cout << " Savings in year " << i << ": $" << currSavings << endl;
        currSavings = currSavings + (currSavings * INTEREST_RATE);

        i = i + 1;
    }

    system("pause>0");
    return 0;
}
