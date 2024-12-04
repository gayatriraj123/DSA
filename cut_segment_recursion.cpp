#include<iostream>
#include<limits.h>
using namespace std;

int solve(int n, int x, int y, int z)
{
    if(n == 0)
    {
        return 0;
    }
    // int a = 0;
    // if(n-x >= 0)
    // {
    //     a = solve(n-x, x, y, z) + 1;
    // }
    // int b = 0;
    // if(n-y >= 0)
    // {
    //     b = solve(n-y, x, y, z) + 1;
    // }
    // int c = 0;
    // if(n-z >= 0)
    // {
    //     c = solve(n-z, x, y, z) + 1;
    // }
    if(n < 0)
    {
        return INT_MIN;
    }
    int ans1 = solve(n-x, x, y, z) + 1;
    int ans2 = solve(n-y, x, y, z) + 1;
    int ans3 = solve(n-z, x, y, z) + 1;

    int ans = max(ans1, max(ans2, ans3));
    return ans;
}

int main()
{
    int n = 8;
    int x = 3;
    int y = 3;
    int z = 3;
   

    int ans = solve(n, x, y, z);
     if(ans<0)
    {
        ans =0;
    }
    cout<<"Ans is = "<<ans<<endl;
    return 0;
}