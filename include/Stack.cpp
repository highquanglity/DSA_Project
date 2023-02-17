#include <iostream>
using namespace std;
#define N 10000

template <class T>
class Stack
{
private:
    T arr[N];
    unsigned int n;

public:
    Stack() //Khởi tạo Stack
    {
        this->n = 0;
    }
    T get_arr_element(int i) //Trả về phần tử thứ i của mảng
    {
        return arr[i];
    }
    int size() //Trả về số phần tử của Stack
    {
        return this->n;
    }
    bool IsEmpty() //Kiểm tra Stack có rỗng hay không
    {
        if (n == 0)
            return true;
        else
            return false;
    }
    bool IsFull() //Kiểm tra Stack có đầy hay không
    {
        if (n == N)
            return true;
        else
            return false;
    }
    void push(T k) //Thêm phần tử k vào Stack
    {
        if (IsFull())
            return;
        arr[n] = k;
        n++;
    }
    T pop() //Xóa phần tử ở đỉnh của Stack
    {
        if (IsEmpty())
            return 0;
        n--;
        return arr[n];
    }
    T top() //Trả về phần tử ở đỉnh của Stack
    {
        if (IsEmpty())
            return 0;
        return arr[n - 1];
    }
    void show() //Hiển thị Stack
    {
        if (IsEmpty())
            return;
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
    }
};