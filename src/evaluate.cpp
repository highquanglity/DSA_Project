// # create Stack class: Done
// # basic algorithm :Done

// # infer with a cpp file:  Done
// #longest code block:Done
// #using matplotlib library:Done

#include <bits/stdc++.h>
#include <filesystem>
using namespace std;
namespace fs = filesystem;

#include "../include/utils.cpp"

int main(int argc, char *argv[])
{
    string path = "C:/Users/user/Desktop/DSA_Project/sample";
    for (int i = 1; i <= 100; i++)
    {
        string file_name = "C:/Users/user/Desktop/DSA_Project/sample/sample" + to_string(i) + ".cpp";
        ifstream file(file_name);

        int no_of_block = 0;
        cout << endl
             << "Sample " << i << ": " << file_name << " " << endl;

        // cout << argv[1] << " ";
        string expr = cpp_to_string(file);
        map<string, int> length_of_codeblock;
        // cout << endl
        //     << expr;

        if (areBracketsBalanced(expr))
        {
            cout << "Balanced" << endl;

            find_the_longest_codeblock(expr, length_of_codeblock, no_of_block);
        }
        else
        {
            longestValidParentheses(expr);
            cout << "Please fix the error in your file and try again" << endl;
        }
    }

    return 0;
}
