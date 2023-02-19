// C++ program to print address of an object
// Using & operator
#include <iostream>
using namespace std;

class GFG {
public:
	int x;
};

int main()
{
	GFG obj1 = GFG();
	GFG obj2 = GFG();

	cout << "Address of object 1 \n";
	cout << &obj1 << endl;

	cout << "Address of object 2\n";
	cout << &obj2 << endl;

	return 0;
}
