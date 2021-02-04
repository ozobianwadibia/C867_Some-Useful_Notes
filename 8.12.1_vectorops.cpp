/* Modify the existing vector's contents, by erasing the element at index 1 (initially 200), then inserting 100 and 102 in the shown locations. Use Vector ADT's erase() and insert() only, and remember that the first argument of those functions is special, involving an iterator and not just an integer. Sample output of below program:
100 101 102 103 */

#include <iostream>
#include <vector>

using namespace std;

void PrintVectors(vector<int> numsList)
{
    int i;
    for (i = 0; i < numsList.size(); ++i)
    {
        cout << numsList.at(i) << " ";
    }
    cout << endl;
}

int main()
{
    vector<int> numsList;

    numsList.push_back(101);
    numsList.push_back(200);
    numsList.push_back(103);

    /* Your solution goes here  */
    numsList.erase(numsList.begin() + 1);
    numsList.insert(numsList.begin() + 0, 100);
    numsList.insert(numsList.begin() + 2, 102);

    PrintVectors(numsList);

    return 0;
}