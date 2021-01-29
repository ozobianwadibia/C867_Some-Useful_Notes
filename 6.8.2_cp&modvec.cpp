/*  Write a loop that sets newScores to oldScores shifted once left, with element 0 copied to the end. Ex: If oldScores = {10, 20, 30, 40}, then newScores = {20, 30, 40, 10}.*/

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
    const int SCORES_SIZE = 4;
    vector<int> oldScores(SCORES_SIZE);
    vector<int> newScores(SCORES_SIZE);
    int i = 0;

    oldScores.at(0) = 10;
    oldScores.at(1) = 20;
    oldScores.at(2) = 30;
    oldScores.at(3) = 40;

    /* Your solution goes here  */

    for (i = 0; i < SCORES_SIZE - 1; ++i)
    {
        newScores[i] = oldScores[i + 1];
    }
    newScores[SCORES_SIZE - 1] = oldScores[0];

    for (i = 0; i < SCORES_SIZE; ++i)
    {
        cout << newScores[i] << " ";
    }

    cout << endl;

    return 0;
}
