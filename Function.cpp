#include<iostream>
using namespace std;
void printname()
{
    int n;
    cout<<"enter the value of n :"<<endl;

    cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<"gayatri "<<endl;
    }
}
void printnumber(int num)
{
    cout<<num;
}
int main()
{
    // function call
    // printname();

    int a=5;
    printnumber(a);
}