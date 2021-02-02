/* Complete function PrintPopcornTime(), with int parameter bagOunces, and void return type. If bagOunces is less than 3, print "Too small". If greater than 10, print "Too large". Otherwise, compute and print 6 * bagOunces followed by "seconds". End with a newline. Example output for ounces = 7:
42 seconds */

#include <iostream>

//#include <vector>
//#include <string>
//#include <cctype>
//#include <cmath>
//#include <iomanip>
//#include <cctype>
//#include <cstdlib>

using namespace std;

void PrintPopcornTime(int bagOunces)
{
    if (bagOunces < 3)
    {
        cout << "Too small" << endl;
    }
    else if (bagOunces > 10)
    {
        cout << "Too large" << endl;
    }
    else
    {
        cout << bagOunces * 6 << " seconds" << endl;
    }
}

int main()
{
    PrintPopcornTime(7);

    return 0;
}
