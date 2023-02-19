#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    for(int i=1; i<=100;i++){
        // Create and open a text file
        string path="C:/Users/user/Desktop/DSA_Project/sample/";
        string name=path+"sample"+to_string(i)+".cpp";
        cout<<"Creating file: "<<name<<"--------"<<endl;
        ofstream MyFile(name);

        // // Write to the file
        MyFile << "";

        // // Close the file
        MyFile.close();
        
    }
    return 0;
}