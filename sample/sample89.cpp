
// C++ program to print address of an object
#include <iostream>
#include <memory>
using namespace std;
 
class GFG {
};
 
int main()
{
    GFG obj1 = GFG();
    GFG obj2 = GFG();
 
    cout << "Address of this object 1 is "
         << addressof(obj1) << endl;
    cout << "Address of this object 2 is "
         << addressof(obj2) << endl;
 
    return 0;
}