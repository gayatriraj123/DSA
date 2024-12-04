#include<iostream>
using namespace std;
int main()
{
    int n, r,c;
    cout<<"enter the number :"<<endl;
    cin>>n;
    for(r=0;r<n;r++)
    {
        for(c=0;c<n-r-1;c++)
        {
            cout<<" ";
        }
        for(c=0;c<r+1;c++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }

}