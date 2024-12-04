#include<iostream>
#include<limits.h>
using namespace std;

void find(int arr[], int n, int i, int& maxi)
{
    //base case
    if(i>=n)
    {
        return;
    }
        //solve only one case
    if(arr[i] > maxi)
    {
        maxi = arr[i];
    }
    find(arr, n, i+1, maxi);
}

void findM(int arr[], int n, int i, int &mini)
{
    if(i>= n)
    {
        return;
    }
    if(arr[i] < mini)
    {
        mini = arr[i];
    }
    // mini = min(mini, arr[i]);
    findM(arr, n, i+1, mini);
}

int main()
{
    int arr[] = {10,30,21,44,32,17,19,66};

    int n=8;

    int maxi = INT_MIN;
    int mini = INT_MAX;
    int i=0;
    find(arr, n, i, maxi);
    findM(arr, n, i, mini);
    cout<<"max number is "<<maxi<<endl;
    cout<<"min number is "<<mini<<endl;

    return 0;
}