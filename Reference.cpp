#include<iostream>
using namespace std;

int *solve(int *& a)
{
    int a=5;
    int *ans = &a;
    // a++;
    return ans;
}
int main()
{
    int a;
    // int &b=a;
    solve(a);

    cout<<a<<endl;
    // cout<<b<<endl;
    return 0;
}