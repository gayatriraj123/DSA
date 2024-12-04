#include<iostream>
using namespace std;

void printcount(int n)      //n in parameter
{
    for(int i=1;i<=n;i++)
    {
        cout<<i<<" ";
    }
    cout<<endl;
}

int main()
{
    int n;
    cout<<"enter the value of n :";
    cin>>n;
    // n is argument
    printcount(n);
    return 0;
}