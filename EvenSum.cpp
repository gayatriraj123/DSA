#include<iostream>
using namespace std;

int getEvenSum(int n)
{
    int sum=0;
    for(int i=2;i<=n;i=i+2)
    {
        sum=sum+i;
    }
    return sum;
}


// int getSum(int n)
// {
//     int sum =0;
//     for(int i=1;i<=n;i++)
//     {
//         sum=sum+i;
//     }
//     return sum;
// }

int main()
{
    // int n;
    // cout<<"enter the value of n :"<<endl;
    // cin>>n;
    // int sum =getSum(n);
    // cout<<"Sum upto "<< n <<" is "<<sum<<endl;

    int n;
    cout<<"enter the value of n"<<endl;
    cin>>n;

    int ans = getEvenSum(n);
    cout<<"even sum is ="<<ans<<endl;
    return 0;
}