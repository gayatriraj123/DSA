#include<iostream>
using namespace std;

int fast(int a, int b)
{
   int ans =1;
   while(b>0)
   {
    if(b&1) 
    {
        ans = ans * a;
    }
    a=a*a;
    b>>=1;
   }
   return ans;
}  //O(log b)

int slow(int a, int b)
{
    int ans=1;

    for(int i=0;i<b;i++)
    {
        ans*=a;
    }
    return ans;
}//O(b)

int main()
{
    cout<<"fast(5,4)"<<fast(5,4)<<endl;
    cout<<"slow(5,4)"<<slow(5,4)<<endl;
    return 0;
}