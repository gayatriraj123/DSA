#include<iostream>
using namespace std;

int main()
{
   int n,r,c;
   cin>>n;

   for(r=0;r<n;r++)
   {
    for(c=0;c<n-r;c++)
    {
        cout<<c+1<<" ";
    }
    cout<<endl;
   }
    return 0;
}