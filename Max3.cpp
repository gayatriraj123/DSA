#include<iostream>
using namespace std;

int FindMax(int a,int b,int c)
{
    if(a>b && a>c)
    {
        return a;
    }
    if(b>a && b>c)
    {
        return b;
    }
    else
    {
        return c;
    }
}

int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    
    int maxnumber =FindMax(a,b,c);
    cout<<maxnumber<<endl;
    return 0;
}