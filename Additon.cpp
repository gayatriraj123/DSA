#include<iostream>
using namespace std;

int add(int a, int b)
{
    int result = a+b;
    return result;
}

int main()
{
    int a ,b;
    cout<<"enter the value of a :";
    cin>>a;
    cout<<"enter the value of b :";
    cin>>b;

    int sum = add(a,b);
    cout<<"Addition od a and b :"<<sum<<endl;

    return 0;
}