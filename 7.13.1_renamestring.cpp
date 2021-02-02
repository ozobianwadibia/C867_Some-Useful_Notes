/* Complete the function to replace any period by an exclamation point. Ex: "Hello. I'm Miley. Nice to meet you." becomes:
"Hello! I'm Miley! Nice to meet you!" */

#include <iostream>
#include <string>

//#include <cctype>
//#include <vector>
//#include <cmath>
//#include <iomanip>
//#include <cctype>
//#include <cstdlib>

using namespace std;

void MakeSentenceExcited(char *sentenceText)
{
    for (unsigned int i = 0; i < strlen(sentenceText); i++)
    {
        if (sentenceText[i] == '.')
        {
            sentenceText[i] = '!';
        }
    }
    return;
}

int main()
{

    const int TEST_STR_SIZE = 50;
    char testStr[TEST_STR_SIZE];

    // strcpy is apparently unsafe (deprecated)
    strcpy_s(testStr, "Hello. I'm Miley. Nice to meet you.");
    MakeSentenceExcited(testStr);
    cout << testStr << endl;

    return 0;
}