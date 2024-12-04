#include<iostream>
using namespace std;

void print(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void swapAlternate(int arr[],int size)
{
    for(int i=0;i<size;i+=2)
    {
        if(i+1<size)
        {
            swap(arr[i], arr[i+1]);

        }
    }
}

int main()
{
    int arr[8] = {1,2,3,4,5,6,7,8};
    int brr[7] = {7,6,5,4,3,2,1};

    swapAlternate(arr,8);
    print(arr,8);

    swapAlternate(brr,7);
    print(brr,7);

    

    return 0;
}