#include<iostream>
using namespace std;

int main()
{
    int n,r,c;
    cout<<"enter the numbers :";
    cin>>n;
// upper portion
    for(r=0;r<n;r++)
    {
        // stars
        for(c=0;c<n-r;c++)
        {
            cout<<"*";
        }
        for(c=0;c<2*r+1;c++)
        {
            cout<<" ";
        }
        for(c=0;c<n-r;c++)
        {
            cout<<"*";
        }
         cout<<endl; 
    }  

    // Lower portion
     for(r=0;r<n;r++)
    {
        // stars
        for(c=0;c<r+1;c++)
        {
            cout<<"*";
        }
        for(c=0;c<2*n-2*r-1;c++)
        {
            cout<<" ";
        }
        for(c=0;c<r+1;c++)
        {
            cout<<"*";
        }
         cout<<endl; 
    }  
}
