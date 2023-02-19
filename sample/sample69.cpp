// C++ program to demonstrate
// Function overriding
#include <iostream>
using namespace std;
class GFG {
	public:
	virtual void display() {
		cout<<"Function of base class"<<endl;
	}
};
class derived_GFG : public GFG {
	public:
	void show() {
		cout<<"Function of derived class"<<endl;
	}
};
int main() {
derived_GFG dg;
dg.show();
return 0;
}
