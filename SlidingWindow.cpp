#include<iostream>
#include<deque>
using namespace std;

void solve(int arr[], int n, int k)
{
    deque<int> q;
    //process 1st window in size k
    for(int i=0; i<k;i++)
    {
        if(arr[i]<0)
        {
            q.push_back(i);
        }
    }
    //remaining window ko procwss 
    for(int i=k;i<n;i++)
    {
        if(q.empty())
        {
            cout<< 0 <<" ";
        }
        else
        {
            cout<< arr[q.front()] <<" ";
        }
        //remove out off element in window
        while((!q.empty()) && (i-q.front() >= k))
        {
            q.pop_front();
        }
        //check element in insertion
        if(arr[i]<0)
        {
            q.push_back(i);
        }
    }

    //ans print for last window
    if(q.empty())
        {
            cout<< 0 <<" ";
        }
        else
        {
            cout<< arr[q.front()] <<" ";
        }
}

int main()
{
    int arr[] = {12, -1, -7, 8, -15, 30, 16, 28};
    int size = 8;

    int k = 3;

    solve(arr, size, k);

    return 0;
}