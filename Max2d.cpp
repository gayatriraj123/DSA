#include<iostream>
#include<limits.h>
using namespace std;

int getMax(int arr[][3], int row, int col)
{
    int maxi = INT_MIN;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            if(arr[i][j]>maxi)
            {
                maxi= arr[i][j];
            }
        }
    }
    return maxi;
}


int getMin(int arr[][3], int row, int col)
{
    int mini = INT_MAX;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            if(arr[i][j]<mini)
            {
                mini= arr[i][j];
            }
        }
    }
    return mini;
}

int main()
{
int arr [3][3];
int row = 3;
int col = 3;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>arr[i][j];
        }
      
    }
    cout<<"printing all elements"<<endl;
     for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
      
    }
    // cout<<"Printing sum of rows"<<endl;
    // PrintSum(arr , row , col);

    // int key = 1;
    // if(findkey(arr,row,col,key))
    // {
    //     cout<<"true"<<endl;
    // }
    // else
    // {
    //     cout<<"false"<<endl;
    // }
    cout<<"Maximum number is "<<getMax(arr,row,col)<<endl;
    cout<<"Minimum number is "<<getMin(arr,row,col);



}