#include<iostream>
using namespace std;


int main()
{
    int n,r,c;
    cout<<"enter the numbers"<<endl;
    cin>>n;
   
    for(r=0;r<n;r++)
    {
        //spaces
        for(c=0;c<r;c++)
        {
            cout<<" ";

        }
        //stars
        for(c=0;c<n-r;c++)
        {
            cout<<"* ";

        }
        cout<<endl;
    }
    
}