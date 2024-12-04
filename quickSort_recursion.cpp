#include<iostream>
using namespace std;

int partition(int arr[], int s, int e)
{
    //step 1:choose pivot
    int pivotIndex = s;
    int pivotEle = arr[s];

    //step 2 : find right position of pivot and place it here
    int count = 0;
    for(int i = s+1;i<=e;i++)
    {
        if(arr[i] <= pivotEle)
        {
            count++;
        }
    }
    //when i out of loop that time i have a right position of pivot index 
    int rightIndex = s + count;
    swap(arr[pivotIndex], arr[rightIndex]); 
    pivotIndex = rightIndex;

    // step 3 : check left less ele of pivot and right is high
    int i=0;
    int j=e;
    while(i < pivotIndex && j > pivotIndex)
    {
        while(arr[i] < pivotIndex)
        {
            i++;
        }
        while(arr[j] > pivotIndex)
        {
            j--;
        }
        // 2 case have to be
        // a - i found the ele to swap
        // b - no need to swap
        if(i < pivotIndex && j > pivotIndex)
        {
            swap(arr[i], arr[j]);
        }
    }
    return pivotIndex; 

}

void quickSort(int arr[], int s, int e)
{
    //base case
    if(s>=e)
    {
        return ;
    }
    
    //partition logic
    int p = partition(arr, s, e);

    //recursive call
    //left
    quickSort(arr, s, p-1);
    //right
    quickSort(arr, p+1, e);
}

int main()
{
    int arr[] = { 8,1,3,4,20,20,20,20,50,30};
    int n = 10;
    int s = 0;
    int e = n-1;
    quickSort(arr, s, e);

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}