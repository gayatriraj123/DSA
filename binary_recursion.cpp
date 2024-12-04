#include<iostream>
#include<vector>
using namespace std;

int check(vector<int> &v, int s, int e, int target)
{
    //base case
    if(s > e)
    {
        return -1;
    }
    int mid = s + (e-s) / 2;
    if(v[mid] == target)
    {
        return mid;
    }

    if(v[mid] > target)
    {
        // e =  mid -1;
        return check(v, mid+1, e, target); 
    }
    else
    {
        // s = mid + 1;
        return check(v, s, mid-1 , target); 
    }
    // check(v, s, e, target);

}

int main()
{
    vector<int> v{10,20,40,60,70,90,99};

    int target = 99;
    int n = v.size();
    int s = 0;
    int e = n-1;
    int ans = check(v, s, e, target);

    cout<<"ans is "<<ans<<endl;

    return 0;
}