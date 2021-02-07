/* Assign numItems' address to numItemsPtr, then print the shown text followed by the value to which numItemsPtr points. End with newline.
Items: 99 */

#include <iostream>

using namespace std;

int main()
{
    int *numItemsPtr = nullptr;
    int numItems = 99;

    /* Your solution goes here  */
    numItemsPtr = &numItems;

    cout << "Items: " << *numItemsPtr << endl;

    return 0;
}