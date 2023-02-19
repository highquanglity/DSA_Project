// C++ Program to find class from
// Binary IP address classful addressing.
#include <iostream>
using namespace std;

// Driver Code
int main()
{
	// IP declared IPv4
	// 11100110.00110100.01101010.11010100
	int s[32] = { 1, 1, 1, 0, 0, 1, 1, 0, 0, 0, 1,
				1, 0, 1, 0, 0, 0, 1, 1, 0, 1, 0,
				1, 0, 1, 1, 0, 1, 0, 1, 0, 0 };


	// Checking on all characters
	for (int i = 0; i < 32; i++) {
		if (!(s[i] == 0 || s[i] == 1)) {
			cout << "Invalid";
			break;
		}

		if (i != 0 && i % 8 == 0)
			cout << " ";

		cout << s[i];
	}

	cout<<endl;

	// Condition for Class A
	if (s[0] == 0) {
		cout << "Class A";
	

	// Condition for Class B
	else if (s[0] == 1 && s[1] == 0) {
		cout << "Class B";
	

	// Condition for Class C
	else if (s[0 == 1 && s[1] == 1 && s[2] == 0) {
		cout << "Class C";
	}

	// Condition for Class D
	else if (s[0] == 1 && s[1] == 1 && s[2] == 1
			&& s[3] == 0) {
		cout << "Class D";
	}

	// Condition for Class E
	else {
		cout << "Class E";
	}

	return 0;
}
