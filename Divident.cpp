#include<iostream>
using namespace std;

int solve(int divident, int divisor)
{
    int s=0;
    int e=divident;
    int mid = s + (e-s)/2;
    int ans = 0 ;
    while(s<=e)
    {
        if(mid*divisor==divident)
        {
            return mid;
        }
        if(mid*divisor > divident)
        {
            e=mid-1;
        }
        else{
            ans = mid;
            s=mid+1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}

int main()
{
    int divident = 22;
    int divisor = 7;

    int ans = solve(divident, divisor);
    cout<<"ans is "<< ans<<endl;
    return 0;
}