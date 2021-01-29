/*  Use of some functions in cctype. */

#include <iostream>
#include <cctype>

//#include <cmath>
//#include <iomanip>
//#include <cctype>
//#include <cstdlib>
// #include <vector>
// #include <string>

using namespace std;

int main()
{
    const int MAX_LEN = 30;     // Max string length
    char userStr[MAX_LEN] = ""; // User defined string
    int i = 0;

    // Prompt user to enter string
    cout << "Enter string (<"
         << MAX_LEN << " chars): ";
    cin >> userStr;

    cout << "Original: " << userStr << endl;

    cout << "isalpha:  ";
    for (i = 0; userStr[i] != '\0'; ++i)
    {
        cout << isalpha(userStr[i]);
    }
    cout << endl;

    cout << "isdigit:  ";
    for (i = 0; userStr[i] != '\0'; ++i)
    {
        cout << isdigit(userStr[i]);
    }
    cout << endl;

    cout << "isupper:  ";
    for (i = 0; userStr[i] != '\0'; ++i)
    {
        cout << isupper(userStr[i]);
    }
    cout << endl;

    for (i = 0; userStr[i] != '\0'; ++i)
    {
        userStr[i] = toupper(userStr[i]);
    }
    cout << "After toupper: " << userStr << endl;

    return 0;
}
