#include<iostream>
using namespace std;

int main()
{
    int i,r,c,a,b;
    cin>>r;
    cin>>c;
    for(a=0;a<r;a++)
    {
        if(a==0||a==r-1)
        {
            for(b=0;b<c;b++)
            {
                cout<<"*"<<" ";
            }
        }
        else
        {
            cout<<"*"<<" ";      //1 star
            for(i=0;i<r;i++)
            {
                cout<<" "<<" ";      //middle spaces
            }
            cout<<"*";      //last star
        }
        cout<<endl;
    }
    return 0;
}