#include<iostream>
using namespace std;

int main()
{
    int n,m , i,j;
    cout<<"enter the row number"<<endl;
    cin>>n;
    cout<<"enter the row number"<<endl;
    cin>>m;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
  
    return 0;
}