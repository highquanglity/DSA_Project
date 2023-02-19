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
        else if ((temp.top() == '(' && expr[i] == ')') 
        || (temp.top() == '{' && expr[i] == '}') 
        || (temp.top() == '[' && expr[i] == ']'))
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

void draw_bar(vector<int> &value)
{
    plt::bar(value);
    plt::show();
}
void draw_line(vector<int> &value, int &no_of_block)
{
    vector<int> x;
    for (int i = 1; i <= no_of_block; i++)
    {
        x.push_back(i);
    }
    plt::figure();
    plt::plot(x, value, "r*", {{"label", "line"}});
    plt::xlabel("Code Block");
    plt::ylabel("Length of Code Block");
    plt::title("code block analysis");
    plt::legend();
    plt::show();
}
void convert_map_to_vector(map<string, int> &M, vector<int> &value)
{
    for (auto &it : M)
    {
        value.push_back(it.second);
    }
}

// Function to sort the map according
// to value in a (key-value) pairs
void sort_length(map<string, int> &M)
{
    // Declare vector of pairs
    vector<pair<string, int>> A;
    vector<int> value;
    // Copy key-value pair from Map
    // to vector of pairs
    for (auto &it : M)
    {
        A.push_back(it);
    }
    // Sort using comparator function
    sort(A.begin(), A.end(), cmp);
    // Print the sorted value
    cout << endl
         << "After sorting:" << endl;
    for (auto &it : A)
    {
        cout << it.first << ' '
             << it.second << endl;
        value.push_back(it.second);
    }
    cout << endl
         << A[A.size() - 1].first << " is the longest code block with  " << A[A.size() - 1].second << " lines" << endl;
}