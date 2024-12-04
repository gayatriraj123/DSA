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

int lastOcc(vector<int> arr, int target)
{
    int s =0;
    int e=arr.size()-1;
    int ans1=-1;
    int mid = s+(e-s)/2;

    while(s<e)
    {
        
        if(target==arr[mid])
        {
            ans1 = mid;
            s= mid+1;
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
    return ans1;
}

int main()
{
    vector<int> arr{1,1,1,2,3,4,4,4,4,6,7};
    int target = 4;

    int index = firstOcc(arr,target);
    cout<<"Index is "<<index<<endl;

    int indexs = lastOcc(arr,target);
    cout<<"Index is "<<indexs<<endl;

    cout<<"Total occurance is "<<(indexs-index)+1<<endl;

    return 0;
}