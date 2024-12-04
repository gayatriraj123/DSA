#include<iostream>
using namespace std;

bool search(int arr[], int size, int key)
{
    for(int i=0;i<size;i++)
    {
        if(arr[i]==key)
        {
            return 1;
        }
    }
    return 0;
}

int main()
{
    int arr[10] = {2,4,3,6,9,-1,-6,-22,78,10};

    cout<<"Enter the element you want to search"<<endl;
    int key;
    cin>>key;

    bool found = search(arr, 10, key);

    if(found)
    {
        cout<<"element is present in array"<<endl;

    }
    else{
        cout<<"Element is not exist in array"<<endl;
    }

    return 0;
}