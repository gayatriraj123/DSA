#include<iostream>
using namespace std;

int findsqrt(int n)
{
    int target = n;
    int s=0;
    int e=n;
    int mid = s+(e-s)/2;
    int ans = -1;

    while(s<e)
    {
        // if(mid*mid >target)
        // {
        //     e=mid-1;

        // }
        // if(mid*mid < target)
        // {
        //     mid = ans;
        //     s = mid + 1;
        // }
        // if(mid*mid == target)
        // {
        //     return mid;
        // }
        if(mid*mid == target)
        {
            return mid;
        }

        if(mid * mid >target)
        {
            e=mid-1;
        }
        else
        {
            ans = mid;
            s=mid+1;

        }
        mid = s+(e-s)/2;
    }
    // return ans;
}

int main()
{
    int n;
    cout << "Enter the number";
    cin >>n;

    int ans = findsqrt(n);
    cout<<"ans of sqrt is " <<ans<<endl;

    return 0;
}