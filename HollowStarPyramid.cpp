#include<iostream>
using namespace std;

int main()
{
    int n,r,c;
    cout<<"enter the number :";
    cin>>n;
    for(r=0;r<n;r++)
    {
        for(c=0;c<n;c++)       //  remains
        {
            cout<<"* ";

        }
        for(c=0;c<n;c++)
        {
            if(c==0 ||c==n-1)
            {
                cout<<"* ";
            }
            else
            {
                cout<<" ";
            }
        }
        cout<<endl;
    }
}