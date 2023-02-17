#include <iostream>
using namespace std;
#define N 1000

template <class T>
class Stack
{
private:
    T arr[N];
    unsigned int n;

public:
    Stack()
    {
        this->n = 0;
    }
    char get_arr_element(int i)
    {
        return arr[i];
    }
    int size()
    {
        return this->n;
    }
    bool IsEmpty()
    {
        if (n == 0)
            return true;
        else
            return false;
    }
    bool IsFull()
    {
        if (n == N)
            return true;
        else
            return false;
    }
    void push(T k)
    {
        if (IsFull())
            return;
        arr[n] = k;
        n++;
    }
    T pop()
    {
        if (IsEmpty())
            return 0;
        n--;
        return arr[n];
    }
    T top()
    {
        if (IsEmpty())
            return 0;
        return arr[n - 1];
    }
    void show()
    {
        if (IsEmpty())
            return;
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
    }
};