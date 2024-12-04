#include<iostream>
using namespace std;

int main()
{
    int n,r,c;
    cout<<"enter the value of n :"<<endl;
    cin>>n;
    for(int r=1;r<=n;r++)
    {
        int Count=1;
        for(int c=1;c<=r;c++)
        {
            cout<<Count<<" ";
            Count = Count * ( r - c ) / c;

        }
        cout<<endl;
    }
}