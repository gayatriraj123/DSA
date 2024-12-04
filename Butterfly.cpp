#include<iostream>
using namespace std;

int main()
{
    int n,c,r;
    cout<<"enter the value of n :";
    cin>>n;

    for(int r=0;r<n;r++)
    {
        for(int c=0;c<r+1;c++)
        {
            cout<<"* ";
        }
        for(c=0;c<n-r;c++)
        {
            cout<<"  ";
        }
        for(c=0;c<n-r;c++)
        {
            cout<<"  ";
        }
        for(int c=0;c<r+1;c++)
        {
            cout<<"* ";
        }
        
        
        cout<<endl;
    }

    for(int r=0;r<n;r++)
    {
        for(int c=0;c<n-r;c++)
        {
            cout<<"* ";
        }
         for(c=0;c<r+1;c++)
        {
            cout<<"  ";
        }
        for(c=0;c<r+1;c++)
        {
            cout<<"  ";
        }
        for(c=0;c<n-r;c++)
        {
            cout<<"* ";
        }

        cout<<endl;
    }
}