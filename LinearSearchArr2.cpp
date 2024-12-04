#include<iostream>
using namespace std;

int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9,10};

    int size =10;
    int key = 1;
    int flag = 0;

    for(int i=0;i<size;i++)
    {
        if(arr[i]==key)
        {
            flag = 1;
            break;
        }
    }


    if(flag)
    {
        cout<<"number is found "<<endl;
    }
    else
    {
        cout<<"number is not found"<<endl;
    }
    return 0;
}