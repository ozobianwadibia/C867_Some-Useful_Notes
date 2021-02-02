/* Define stubs for the functions called by the below main(). Each stub should print "FIXME: Finish FunctionName()" followed by a newline, and should return -1. Example output:
FIXME: Finish GetUserNum()
FIXME: Finish GetUserNum()
FIXME: Finish ComputeAvg()
Avg: -1 */

#include <iostream>

//#include <vector>
//#include <string>
//#include <cctype>
//#include <cmath>
//#include <iomanip>
//#include <cctype>
//#include <cstdlib>

using namespace std;

/* Your solution goes here  */
int GetUserNum() {
	cout << "FIXME: Finish GetUserNum()" << endl;
	return -1;
}

int ComputeAvg(int userNum1, int userNum2) {
	int avgResult = ((userNum1 + userNum2)) / 2;
	cout << "FIXME: Finish ComputeAvg()" << endl;
	return -1;
}


int main() {

	int userNum1 = 0;
	int userNum2 = 0;
	int avgResult = 0;

	userNum1 = GetUserNum();
	userNum2 = GetUserNum();

	avgResult = ComputeAvg(userNum1, userNum2);

	cout << "Avg: " << avgResult << endl;
	return 0;
}
