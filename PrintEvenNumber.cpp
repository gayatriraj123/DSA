#include<iostream>
using namespace std;

int main()
{
    int N,i;
    // i=2;
    cout<<"enter the number"<<endl;
    cin>>N;
    
    for(i=1;i<=N;i++)
    {
        if(i%2==0)
        {
        cout<<i<<endl;
        }
        // i=i+2;
    }

    // if(i<=N)
    // {
    //     cout<<i<<endl;
    //    i= i+2;
    // }
    // // else
    // {

    // }
    return 0;
}