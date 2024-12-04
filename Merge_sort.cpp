#include<iostream>
// #include<vector>
using namespace std;

void merge1(int *arr, int s, int e)
{
    int mid = (s+e)/2;

    int len1 = mid-s+1;
    int len2 = e-mid;

    int *left = new int[len1];
    int *right = new int[len2];

    //copy the values
    int k= s;
    for (int i=0;i<len1;i++)
    {
        left[i] = arr[k];
        k++;
    }
    int k = mid + 1;
    for(int i=0;i<len2;i++)
    {
        right[i] = arr[k];
        k++;
    }
    // merge two arr logic 
    int leftIndex = 0;
    int rightIndex = 0;
    int mainIndex = s;

    while(leftIndex<len1 && rightIndex < len2)
    {
        if(left[leftIndex] < right[rightIndex])
        {
            arr[mainIndex++] = left[leftIndex++];
            // mainIndex++;
            // leftIndex++;
        }
        else
        {
            arr[mainIndex++] = right[rightIndex++];
        }
    }

    //copy the two different array 
    while(leftIndex < len1)
    {
        arr[mainIndex++] = left[leftIndex++];
    }
    while(rightIndex < len2)
    {
        arr[mainIndex++] = right[rightIndex++];
    }
}

void merge(int *arr,int s, int e)
{
    //base case
    if(s>=e)
    {
        return;
    }
    mid = s + (e - s) / 2;
    //left part sort - recursion
    merge(arr, s, mid);
    //right part sort - recursion
    merge(arr, mid+1, e);
    //merge two sorted array
    merge1(arr, s, e);
}

int main()
{
    int arr[] = {4,5,13,2,12};
    int n= 5;
    int s = 0;
    int e = n-1;
    merge(arr, s, e);
    for(int i=0;i<n; i++)
    {
        cout<< arr[i]<<" ";
    }
    cout<<endl;

    return 0;
}