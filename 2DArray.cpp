#include<iostream>
using namespace std;

int main()
{
    // int arr[3][3]; //=  {{1,2,3},{4,5,6},{7,8,9}};

    // int brr[3][3] = {
    //     {1,2,3},
    //     {4,5,6},
    //     {7,8,9}};
    //         // row wise rpnting 
    //     for(int i=0; i<3;i++)
    //     {
    //         // inner loop for next element
    //         for(int j=0;j<3;j++)
    //         {
    //             cout<<brr[i][j]<<" ";
    //         }
    //         cout<<endl;
    //     }
    //     // coloumn wise printing
    //      for(int i=0; i<3;i++)
    //     {
    //         // inner loop for next element
    //         for(int j=0;j<3;j++)
    //         {
    //             cout<<brr[j][i]<<" ";
    //         }
    //         cout<<endl;
    //     }


    int arr [3][3];
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
    



}