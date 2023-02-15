// # create Stack class: Done
// # basic algorithm :Done

// # infer with a cpp file:  Done
// #longest code block:Done
// #longest combination of code blocks
// #using matplotlib library
// # create GUI:



#include <bits/stdc++.h>
#include "../include/matplotlibcpp.h"
namespace plt = matplotlibcpp;
using namespace std;

#define N 1000
#define _USE_MATH_DEFINES

list<char> list_para = {'(', ')', '{', '}', '[', ']'};
list<char> code_block = {'{', '}'};

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
    char get_arr(int i)
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

template <typename T>
bool contains(list<T> &listofElements, const T &element)
{
    auto it = find(listofElements.begin(), listofElements.end(), element);
    return it != listofElements.end();
}

bool areBracketsBalanced(string expr)
{

    Stack<char> temp;
    Stack<int> line_of_bracket;
    int line = 0;

    for (int i = 0; i < expr.length(); i++)
    {
        if (expr[i] == '\n')
        {
            line++;
        }

        if (temp.IsEmpty())
        {
            if (contains(list_para, expr[i]))
            {
                temp.push(expr[i]);
                line_of_bracket.push(line + 1);
            }
        }
        else if ((temp.top() == '(' && expr[i] == ')') || (temp.top() == '{' && expr[i] == '}') || (temp.top() == '[' && expr[i] == ']'))
        {

            temp.pop();
            line_of_bracket.pop();
        }
        else
        {
            if (contains(list_para, expr[i]))
            {
                temp.push(expr[i]);
                line_of_bracket.push(line + 1);
            }
        }
        // temp.show();

        // cout << endl;
    }

    if (temp.IsEmpty())
    {
        // If stack is empty return true
        return true;
    }
    else
    {

        cout << "The program has not yet balanced the brackets. Check the brackets in the following lines" << endl;
        temp.show();
        cout << endl;
        line_of_bracket.show();
        cout << endl;
        return false;
    }
    return false;
}

string cpp_to_string(ifstream &file_name)
{
    string line;
    string expr;
    int lines_of_file = 0;

    while (getline(file_name, line))
    {
        ++lines_of_file;
        expr += line + "\n";
    }
    cout << "This cpp file has " << lines_of_file << " lines" << endl;
    return expr;
}
bool cmp(pair<string, int> &a,
         pair<string, int> &b)
{
    return a.second < b.second;
}

// Function to sort the map according
// to value in a (key-value) pairs
void sort_length(vector<pair<string, int>> &A)
{

    // Declare vector of pairs
   
    sort(A.begin(), A.end(), cmp);

    // Print the sorted value
    for (auto &it : A)
    {

        cout << it.first << ' '
             << it.second << endl;
    }
}
void create_map_of_codeblock(string expr,vector<pair<string, int>>& length_of_codeblock)
{
    Stack<char> temp;
    Stack<int> line_of_bracket;
    
    int line = 0;

    for (int i = 0; i < expr.length(); i++)
    {
        if (expr[i] == '\n')
        {
            line++;
        }

        if (temp.IsEmpty())
        {
            if (contains(code_block, expr[i]))
            {
                temp.push(expr[i]);
                line_of_bracket.push(line + 1);
            }
        }
        else if ((temp.top() == '{' && expr[i] == '}'))

        {
            int length_codeblock = line - line_of_bracket.top();
            string name = "Block " + to_string(line_of_bracket.top()) + '-' + to_string(line + 1) + ':';
            length_of_codeblock.insert(pair<string, int>(name, length_codeblock));
            temp.pop();
            line_of_bracket.pop();
        }
        else
        {
            if (contains(code_block, expr[i]))
            {
                temp.push(expr[i]);
                line_of_bracket.push(line + 1);
            }
        }
    }
}
void find_the_longest_codeblock(string expr,vector<pair<string, int>>& length_of_codeblock)
{
    create_map_of_codeblock(expr,length_of_codeblock);
    sort_length(length_of_codeblock);
}
void MapToVec(vector<pair<string, int>> &M, vector<int> &value)
{
    for (vector<pair<string, int>>::iterator it = M.begin(); it != M.end(); ++it)
    {
        
        value.push_back(it->second);
    }
}
void draw_bar(vector<int> &value){
    plt::bar(value);
    plt::show();
}
    


int main(int argc, char *argv[])
{
    ifstream file(argv[1]);

    cout << argv[1] << " ";
    string expr = cpp_to_string(file);
    vector<pair<string, int>> length_of_codeblock;
    cout << endl
         << expr;

    if (areBracketsBalanced(expr))
    {
        cout << "Balanced" << endl;
        
        find_the_longest_codeblock(expr,length_of_codeblock);
        vector<int> value;
        MapToVec(length_of_codeblock,value);
        draw_bar(value);

        
    }
    else
        cout << endl
             << "Please fix the error in your file and try again";

    return 0;
}