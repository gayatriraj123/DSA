#include<iostream>
using namespace std;

int main()
{
    int n,r,c;
    cout<<"enter the number:";
    cin>>n;

    for(r=0;r<n;r++)
    {
        // spaces
        for(c=0;c<n-r-1;c++)
        {
            cout<<" ";
        }
        // stars
        for(c=0;c<2*r+1;c++)
        {
            if(c==0)
            {
                cout<<"*";
            }
            else if(c==2*r)
            {
                cout<<"*";
            }
            else
            {
                cout<<" ";
            }
        }
        cout<<endl;
    }

    for(r=0;r<n;r++)
    {
        // spaces
        for(c=0;c<r;c++)
        {
            cout<<" ";
        }
        // stars
        for(c=0;c<2*n-2*r-1;c++)
        {
            if(c==0 || c==2*n-2*r-2)
            {
                cout<<"*";
            }
            else 
            {
                cout<<" ";
            }
            
        }
        cout<<endl;
    }
}