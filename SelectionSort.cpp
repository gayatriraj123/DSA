#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> arr{5,4,3,2,1};
    int n=arr.size();
    for(int i=0; i<n-1; i++)
    {
        int minI = i;
        for(int j=i+1; j<n;j++)
        {
            if(arr[minI] > arr[j])
            {
                minI = j;
            }
            
        }
        swap(arr[i],arr[minI]);
    }

    for(int i=0; i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;
}