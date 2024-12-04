#include<iostream>
#include<string>
using namespace std;

int main()
{
    string str = "this is my messege";
    string str1 = "gayatri";

    str.replace(0, 4, str1 );
    cout<< str<<endl;

    return 0;
}