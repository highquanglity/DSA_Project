// # create Stack class: Done
// # basic algorithm :Done

// # infer with a cpp file:  Done
// #longest code block:Done
// #using matplotlib library:Done


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

        find_the_longest_codeblock(expr, length_of_codeblock, no_of_block,argv[2]);
    }
    else
        {   longestValidParentheses(expr);
            cout << "Please fix the error in your file and try again"<<endl;
    }
    return 0;
}