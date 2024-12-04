#include<iostream>
using namespace std;

void printArr(int arr[],int size)
{
    cout<<"print arr through the function"<<endl;
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<endl;
    }
    cout<<"printing the arr done "<<endl;
}

int main()
{
    // int arr[10];
    // // cout<<"welcome"<<endl;
    // // cout<<"element of 12 th array"<<arr[12];
    // int arr2[3]={1,2,3};
    // // cout<<"welcome"<<endl;
    // cout<<"element of 2 th array"<<arr2[2];
    // int n = 20;
    // int arr3[20]={1};
    // cout<<"printing the array"<<endl;
    // for(int i=0;i<n;i++)
    // {
    //     cout<<arr3[i]<<" ";
    // }
    int arr[10]={1,2,3};
    int n=10;
    printArr(arr,10);


    return 0;
}