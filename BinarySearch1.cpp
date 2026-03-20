#include<iostream>
using namespace std;

int binarySearch(int arr[], int size, int target)
{
    int start = 0;
    int end = size -1;

    int mid = start + (end - start) / 2;

    while(start <= end)
    {
        int element = arr[mid];

        if(element == target)
        {
            return mid;
        }
        if(target < element)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
        mid = start + (end - start) / 2;
    }

    return -1;
}


int main()
{
    int arr[] = {2, 4, 6, 8, 10, 12, 16};
    int size = 7;
    int target = 16;

    int IndexOfTarget = binarySearch(arr, size, target);

    if(IndexOfTarget == -1)
    {
        cout<<"target not found"<<endl;
    }
    else
    {
        cout<<" target are found at "<<IndexOfTarget<<"index "<<endl;
    }

    return 0;
}