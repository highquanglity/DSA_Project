// C++ program to swap two values
// without passing pointer to
// swap function.
#include <iostream>
using namespace std;
void swap(int x, int y

    int temp = x;
    x = y;
    y = temp;
}
 
// Driver code
int main(
{
    int a = 2, b = 5;
    cout << "values of a and b before swapping: " << a
         << " " << b << endl;
    swap(a, b);
    cout << "values of a and b after swapping: " << a << " "
         << b << endl;
    return 0;
}