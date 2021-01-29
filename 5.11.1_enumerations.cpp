/* Print either "Fruit", "Drink", or "Unknown" (followed by a newline) depending on the value of userItem. Print "Unknown" (followed by a newline) if the value of userItem does not match any of the defined options. For example, if userItem is GR_APPLES, output should be:
Fruit  */

#include <iostream>
// #include <string>
// #include <cmath>
// #include <iomanip>
// #include <cctype>
// #include <cstdlib>

using namespace std;

int main()
{
    enum GroceryItem
    {
        GR_APPLES,
        GR_BANANAS,
        GR_JUICE,
        GR_WATER
    };

    GroceryItem userItem = GR_WATER;

    /* Your solution goes here  */
    if (userItem == GR_APPLES || userItem == GR_BANANAS)
    {
        cout << "Fruit\n";
    }
    else if (userItem == GR_JUICE || userItem == GR_WATER)
    {
        cout << "Drink\n";
    }
    else
    {
        cout << "Unknown\n";
    }

    return 0;
}
