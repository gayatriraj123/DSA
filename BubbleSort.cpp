#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> arr{10,1,7,6,14,9};
    int n=arr.size();
    // Bubble sorting 
    for(int round = 1; round<n ; round++)
    {
        for(int i=0; i<n-1; i++)
        {
            if(arr[i]<arr[i+1])
            {
                swap(arr[i],arr[i+1]);
            }
        }
    }
    //print the numbers
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    return 0;
}