#include<iostream>
using namespace std;

void print(string str, string output, int i)
{
    if(i>=str.length())
    {
        cout<<output<<endl;
        return;
    }
    // exclude
    print(str, output, i+1);

    //include
    output.push_back(str[i]);
    print(str, output, i+1);

    // cout<<str.size()<<endl;
}

int main()
{
    string str = "abc";
    string output = "";

    int i=0;
    print(str, output, i);
    // cout<<str.size()<<endl;

    return 0;
}