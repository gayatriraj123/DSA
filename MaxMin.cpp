#include<iostream>
#include<limits.h>
using namespace std;

int getMax(int num[],int n)
{
    int max = INT_MIN;
    for(int i=0;i<n;i++)
    {
        if(num[i]>max)
        {
            max = num[i];
        }
    }
    return max;
}
int getMin(int num[],int n)
{
    int min = INT_MAX;
    for(int i=0;i<n;i++)
    {
        if(num[i]<min)
        {
            min = num[i];
        }
    }
    return min;
}

int main()
{
    int size;
    cout<<"Enter the size of array"<<endl;
    cin>>size;
    cout<<"enter the value in array is";
    int num[100];

    for(int i=0;i<size;i++)
    {
        cin>>num[i];
    }

    cout<<"Max value is "<<getMax(num,size)<<endl;
    cout<<"min value is "<<getMin(num,size)<<endl;



    return 0;
}