#include<iostream>
using namespace std;

int main()
{
    int N,i;
    cout<<"Enter the number"<<endl;
    cin>>N;
    for(i=2;i<N;i++)
    {
        if(N%i==0)
        {
           break;
        }
       
    }
    if(N==i)
    {
        cout<<"number is prime"<<endl;
    }
    else
    {
        cout<<"number is not prime"<<endl;
    }
    return 0;
}