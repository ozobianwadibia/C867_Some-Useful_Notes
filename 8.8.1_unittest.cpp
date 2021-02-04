/* Write a unit test for addInventory(). Call redSweater.addInventory() with parameter sweaterShipment. Print the shown error if the subsequent quantity is incorrect. Sample output for failed unit test given initial quantity is 10 and sweaterShipment is 50:

Beginning tests.
   UNIT TEST FAILED : addInventory()
Tests complete.
Note : UNIT TEST FAILED is preceded by 3 spaces.
*/

#include <iostream>

using namespace std;

class InventoryTag
{
public:
    InventoryTag();
    int getQuantityRemaining() const;
    void addInventory(int numItems);

private:
    int quantityRemaining;
};

InventoryTag::InventoryTag()
{
    quantityRemaining = 0;
}

int InventoryTag::getQuantityRemaining() const
{
    return quantityRemaining;
}

void InventoryTag::addInventory(int numItems)
{
    if (numItems > 10)
    {
        quantityRemaining = quantityRemaining + numItems;
    }
}

int main()
{
    InventoryTag redSweater;
    int sweaterShipment = 0;
    int sweaterInventoryBefore = 0;

    sweaterInventoryBefore = redSweater.getQuantityRemaining();
    sweaterShipment = 5;

    cout << "Beginning tests." << endl;

    /* Your solution goes here  */

    redSweater.addInventory(sweaterShipment);
    if (sweaterInventoryBefore + sweaterShipment != redSweater.getQuantityRemaining())
    {
        cout << "   UNIT TEST FAILED: addInventory()" << endl;
    }

    cout << "Tests complete." << endl;

    return 0;
}