#include<iostream>
using namespace std;

int main()
{
    int n,r,c;
    cout<<"enter the value of n :";
    cin>>n;

    int count=1;

    for(int r=0;r<n;r++)
    {
        for(c=0;c<r;c++)
        {
            cout<<count<<" ";
            count++;
        }
        cout<<endl;
    }
}