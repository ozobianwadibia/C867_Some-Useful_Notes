

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
    char userStr[10]; // Input string
    int i = 0;

    // Prompt user for string input
    cout << "Enter string (<10 chars): ";
    cin >> userStr;

    // Print 1 char at a time
    cout << endl;
    for (i = 0; userStr[i] != '\0'; ++i)
    {
        cout << userStr[i] << endl;
    }
    cout << endl;
    return 0;
}
