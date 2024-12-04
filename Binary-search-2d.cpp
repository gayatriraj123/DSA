#include<iostream>
using namespace std;

bool binarysearch(int arr[][4],int r,int c,int target)
{
    int s=0;
    int e=r*c-1;
    int mid = s+(e-s)/2;

    while(s<=e)
    {
        int r_index = mid/c;
        int c_index = mid%c;

        if(arr[r_index][c_index] == target)
        {
            return true;
        }
        if(arr[r_index][c_index] < target)
        {
             s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid = s+(e-s)/2;
    }
    return false;
}

int main()
{
    int arr[5][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16},{17,18,19,20}};
    int r=5;
    int c=4;
    int target = 33;

    bool ans = binarysearch(arr,r,c,target);

    if(ans)
    {
        cout<<"found"<<endl;
    }
    else{
        cout<<"not found"<<endl;
    }


    return 0;
}