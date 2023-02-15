#include<bits/stdc++.h>
using namespace std;

int main(
    ofstream myfile("./1.cpp");
    if(myfile.is_open()){
        myfile<<"hello world";
        myfile.close();
    }
    else{
        cout<<"Unable to open file";
    }

    return 0;
}
