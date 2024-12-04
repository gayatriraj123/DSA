#include<iostream>
using namespace std;

bool checkPrime(int n)
{
    for(int i=2;i<n;i++)
    {
        if(n%i ==  0)
        {
            return false;
        }
    }
    return true;
}

int main()
{

    int n;
    cin>>n;

    bool isPrime=checkPrime(n);

    if(isPrime)
    {
        cout<<"Prime"<<endl;
    }
    else
    {
        cout<<"Not Prime "<<endl;
    }
    // int n;
    // cout<<"Enter the value of n :";
    // cin>>n;

    // for(int i=2;i<n-1;i++)
    // {
    //     if(n%i==0)
    //     {
    //         cout<<"Number is not prime"<<endl;
    //     }
    //     else 
    //     {
    //         cout<<"Number is prime"<<endl;
    //     }
    // }

    return 0;
}