#include<iostream>
using namespace std;

int main()
{
    int n,c,r;
    cout<<"enter the number :";
    cin>>n;
// upper side
    for(r=0;r<n;r++)
    {
        for(c=0;c<r+1;c++)
        {
            cout<<r+1;
            if(c!=r)
            {
                cout<<"*";
            }
        }
        cout<<endl;
    }

// lower side

    for(r=0;r<n;r++)
    {
        for(c=0;c<n-r;c++)
        {
            cout<<n-r;
            if(c!=n-r-1)
            {
                cout<<"*";
            }
        }
        cout<<endl;
    }
}