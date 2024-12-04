#include<iostream>
using namespace std;

void transpose(int arr[][3], int row, int col,int Tarr[][3])
{
    for(int i=0;i<row;i++)
    {
        for(int j=0; j<col; j++)
        {
            // swap(arr[i][j],arr[j][i]);
            Tarr[i][j] = arr[j][i];
        }
    }
}

void printArray(int arr[][3], int row, int col)
{
    for(int i=0;i<row; i++)
    {
        for(int j=0;j<col;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
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

    // int key = 1;
    // if(findkey(arr,row,col,key))
    // {
    //     cout<<"true"<<endl;
    // }
    // else
    // {
    //     cout<<"false"<<endl;
    // }
    // cout<<"Maximum number is "<<getMax(arr,row,col)<<endl;
    // cout<<"Minimum number is "<<getMin(arr,row,col);
    int Tarr[3][3];
    transpose(arr,row,col,Tarr);
    cout<<"printing the transpose array"<<endl;
    printArray(Tarr,row,col);

}