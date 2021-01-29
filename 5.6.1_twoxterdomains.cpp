/*Modify the program to include two-character .com names where the second character can be a letter or a number, as in a2.com. Hint: Add a second loop, following the while (letter2 <= 'z') loop, to handle numbers.*/

#include <iostream>

using namespace std;

int main()
{
    char usrInput = '?';
    char letter1 = '?';
    char letter2 = '?';

    cout << endl
         << "Two-letter domain names:" << endl;

    letter1 = 'a';
    while (letter1 <= 'z')
    {
        letter2 = 'a';
        while (letter2 <= 'z')
        {
            cout << letter1 << letter2 << ".com" << endl;
            ++letter2;
        }
        ++letter1;
    }

    letter1 = 'a';
    while (letter1 <= 'z')
    {
        letter2 = '0';
        while (letter2 >= '0' && letter2 <= '9')
        {
            cout << letter1 << letter2 << ".com" << endl;
            ++letter2;
        }
        ++letter1;
    }

    return 0;
}
