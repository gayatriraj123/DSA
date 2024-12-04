#include<iostream>
#include<limits.h>
using namespace std;

int main()
{
    int arr[] = {2,3,4,5,6,7,8,9,20,21};
    int size = 10;
    // int max = INT_MIN;
    int min = INT_MAX;
    for(int i=0;i<size;i++)
    {
        if(arr[i]<min)
        {
            min=arr[i];
        }
    }
    cout<<"Minimum number is : "<<min<<endl;
return 0;

}