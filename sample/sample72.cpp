
// CPP program to demonstrate
// parameterized constructors
#include <iostream>
using namespace std;
class GFG 
private:
    int x, y;
public:
    // Parameterized Constructor
    GFG(int x1, int y1
    {
        x = x1;
        y = y1;
    }
    int getX() { return x; }
    int getY() { return y; }
};
int main()
{
    // Constructor called
    GFG G(10, 15);
    // Access values assigned by constructor
    cout << "G.x = " << G.getX() << ", G.y = " << G.getY();
    return 0;
}