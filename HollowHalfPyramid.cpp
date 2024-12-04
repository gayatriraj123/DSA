#include<iostream>
using namespace std;

int main()
{
    int n,r,c;
    cout<<"enter the value of n :"<<endl;
    cin>>n;

    for(int r=0;r<n;r++)
    {
        for(int c=0;c<r+1;c++)
        {
            if(c==0 || c==r || r==n-1)
            {
                cout<<c+1<<" ";

            }
            else
            {
                cout<<"  ";
            }
            

        }
        
        cout<<endl;
    }
}