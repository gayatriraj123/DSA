#include<iostream>
using namespace std;

int fact(int n)
{
    int fact=1;
    for(int i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    return fact;
}

int main()
{
    int n;
    cout<<"enter the value of n :";
    cin>>n;
    int ans = fact(n);
    cout<<"factorial of "<<n<<" is :"<<ans<<endl;
    return 0;
}