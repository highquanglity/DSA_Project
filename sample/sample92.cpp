// C++ program to print address of an object
#include <bits/stdc++.h>
using namespace std;
 
class GFG 
 
public:
    void printAddress()
    {
        cout << "Address of this object is " << this
             << endl;
    }
};
 
signed main(
{
 
    GFG obj1 = GFG();
    GFG obj2 = GFG();
 
    obj1.printAddress();
    obj2.printAddress();
 
    return 0;
}