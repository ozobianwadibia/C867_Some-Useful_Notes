// iterative factorial using while loop, counting down

#include <iostream>
using namespace std;

int main()
{
    int userInt, totalValue = 1;

    cout << "Enter a number :" << endl;
    cin >> userInt;

    while (userInt > 1)
    {
        totalValue *= userInt;
        userInt--;
    }

    cout << "totalValue : " << totalValue << endl;

    return 0;
}
