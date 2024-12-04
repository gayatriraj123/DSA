#include<iostream>
using namespace std;

bool findkey(int arr[][3], int row, int col,int key)
{
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(arr[i][j]==key)
            {
                return true;
            }
            
        }

    }
    return false;
}


void PrintSum(int arr[3][3], int row, int col)
{
    for(int i=0;i<3;i++)
    {
        int sum=0;
        for(int j=0;j<3;j++)
        {
            sum = sum + arr[j][i];
        }
        cout<<sum<<endl;

    }
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

    int key = 1;
    if(findkey(arr,row,col,key))
    {
        cout<<"true"<<endl;
    }
    else
    {
        cout<<"false"<<endl;
    }
}