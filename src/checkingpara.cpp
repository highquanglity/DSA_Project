// # create Stack class: Done
// # basic algorithm :Done

// # infer with a cpp file:  Done
// #longest code block:Done
// #longest combination of code blocks
// #using matplotlib library
// # create GUI:

#include <bits/stdc++.h>

#include "../include/utils.cpp"

int main(int argc, char *argv[])
{
    ifstream file(argv[1]);
    int no_of_block = 0;
    cout << argv[1] << " ";
    string expr = cpp_to_string(file);
    map<string, int> length_of_codeblock;
    cout << endl
         << expr;

    if (areBracketsBalanced(expr))
    {
        cout << "Balanced" << endl;

        find_the_longest_codeblock(expr, length_of_codeblock, no_of_block);
    }
    else
        cout << endl
             << "Please fix the error in your file and try again";

    return 0;
}
