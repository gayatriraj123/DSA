#include<iostream>
using namespace std;

int main()
{
    int n,r,c;
    cout<<"enter the number :";
    cin>>n;
    for(r=0;r<n;r++)
    {
        
        for(c=0;c<r+1;c++)
        {
            int ans=c+1;
            char ch= ans+'A'-1;
            cout<<ch;

        }
        for(c=r;c>=1;c--)
        {
            int ans=c;
            char ch= ans+'A'-1;
            cout<<ch;
        }
        cout<<endl;
    }
}