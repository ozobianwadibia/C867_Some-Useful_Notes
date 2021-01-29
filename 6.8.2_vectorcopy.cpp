

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
    const int NUM_ELEMENTS = 4;           // Number of elements
    vector<int> origPrices(NUM_ELEMENTS); // Original prices
    vector<int> salePrices(NUM_ELEMENTS); // Sale prices
    int i = 0;                            // Loop index

    // Assign original prices
    origPrices.at(0) = 10;
    origPrices.at(1) = 20;
    origPrices.at(2) = 30;
    origPrices.at(3) = 40;

    // Copy original prices to sales prices
    salePrices = origPrices;

    // Update salePrices. Note: does not affect origPrices
    salePrices.at(2) = 27;
    salePrices.at(3) = 35;

    // Output original and sale prices
    cout << "Original prices: ";
    for (i = 0; i < NUM_ELEMENTS; ++i)
    {
        cout << " " << origPrices.at(i);
    }
    cout << endl;

    cout << "Sale prices:     ";
    for (i = 0; i < NUM_ELEMENTS; ++i)
    {
        cout << " " << salePrices.at(i);
    }
    cout << endl;

    return 0;
}
