#include<iostream>
#include<vector>
using namespace std;

bool check(vector<int> &arr, int n, int i)
{
    //base case
    if(i == n-1)
    {
        return true;
    }

    //solve one case
    if(arr[i+1] < arr[i])
    {
        return false;
    }
    // handle recursion
    check(arr, n, i+1);

}

int main()
{
    vector<int> v{10,20,90,50,60};
    int n= v.size();

    int i=0;

    bool sorted = check(v, n, i);
    if(sorted)
    {
        cout<<"array is sorted"<<endl;
    }
    else
    {
        cout<<"array is not sorted"<<endl;
    }
    
    return 0;
}