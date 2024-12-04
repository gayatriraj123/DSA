#include<iostream>
#include<vector>
using namespace std;

int firstOcc(vector<int> arr, int target)
{
    int s =0;
    int e=arr.size()-1;
    int ans=-1;
    int mid = s+(e-s)/2;

    while(s<e)
    {
        
        if(target==arr[mid])
        {
            ans = mid;
            e=mid-1;
        }
        else if(target<arr[mid])
        {
            e=mid-1;
        }
        // else if(target>arr[mid])
        else
        {
            s=mid+1;
        }
        mid = s+(e-s)/2;
    }
    return ans;
}

int main()
{
    vector<int> arr{1,1,1,2,3,4,4,4,4,6,7};
    int target = 4;

    int indexs = firstOcc(arr,target);
    cout<<"Index is "<<indexs<<endl;

    return 0;
}