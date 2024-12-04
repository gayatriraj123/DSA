#include<iostream>
using namespace std;

int main()
{
    int arr[] = {1,0,1,0,1,0,1,0,1,0,1,0,0,0,0,1,1,1,0,1};
    int size = 20;
    
    int num0 = 0;
    int num1 = 0;

    for(int i=0;i<size;i++)
    {
        if(arr[i]==0)
        {
            num0++;
        }
        if(arr[i]==1)
        {
            num1++;
        }
    }
    cout<<"Number of zeros :"<<num0<<endl;
    cout<<"Number of Ones :"<<num1<<endl;

    return 0;
}