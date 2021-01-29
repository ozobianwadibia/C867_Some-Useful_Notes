
#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
#include <cctype>

using namespace std;

int main()
{
    string inputName;
    string searchName;

    string coreGtld1;
    string coreGtld2;
    string coreGtld3;
    string coreGtld4;

    bool isCoreGtld = false;

    coreGtld1 = ".com";
    coreGtld2 = ".net";
    coreGtld3 = ".org";
    coreGtld4 = ".info";

    cout << endl
         << "Enter a top-level domain name: " << endl;
    cin >> inputName;

    // Case is irrelevant, so make all comparisons with lower case
    searchName = inputName;

    // Determine whether the user-entered name is a gTLD
    if ((searchName == coreGtld1) || (searchName == coreGtld1.substr(1, coreGtld1.length() - 1)))
    {
        isCoreGtld = true;
    }
    else if ((searchName == coreGtld2) || (searchName == coreGtld2.substr(1, coreGtld2.length() - 1)))
    {
        isCoreGtld = true;
    }
    else if ((searchName == coreGtld3) || (searchName == coreGtld3.substr(1, coreGtld3.length() - 1)))
    {
        isCoreGtld = true;
    }
    else if ((searchName == coreGtld4) || (searchName == coreGtld4.substr(1, coreGtld4.length() - 1)))
    {
        isCoreGtld = true;
    }
    else
    {
        isCoreGtld = false;
    }

    cout << "The name \"" << inputName << "\" ";
    if (isCoreGtld)
    {
        cout << "is a core gTLD." << endl;
    }
    else
    {
        cout << "is not a core gTLD." << endl;
    }

    return 0;
}
