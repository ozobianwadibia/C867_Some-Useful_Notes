/* Write code that inserts userItem into the output string stream itemsOSS until the user enters "Exit". Each item should be followed by a space. Sample output if user input is "red purple yellow Exit":
red purple yellow*/

#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int main()
{
    string userItem;
    ostringstream itemsOSS;

    cout << "Enter items (type Exit to quit):" << endl;
    cin >> userItem;

    while (userItem != "Exit")
    {

        /* Your solution goes here  */
        itemsOSS << userItem << " ";

        cin >> userItem;
    }

    cout << itemsOSS.str() << endl;

    return 0;
}