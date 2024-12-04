#include<iostream>
using namespace std;

void print(int n)
{
    //base case
    if(n==0)
    {
        return;
    }
    //one case are we solved
   
    print(n/10);

     int digit = n % 10;
    cout<<digit<<" ";

}

int main()
{
    int n=0647;

    print(n);
    return 0;
}