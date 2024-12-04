#include<iostream>
using namespace std;

void solve(int arr[])
{
    cout<<"size in function = "<<sizeof(arr)<<endl;
}

int main()
{
    // int a=5;
    // bad practice
    // int *ptr;
    // int* ptr =0;
    // // new idea 
    // int *ptr = nullptr;

    // cout<<&a<<endl;
    // cout<<ptr<<endl;
    // cout<<*ptr<<endl;

    // int arr[4] = {1,2,3,4};
    // cout<<arr<<endl;
    // cout<<arr[0]<<endl;
    // cout<<&arr<<endl;
    // cout<<&arr[0]<<endl;



    // char name[9] = "SherBano";
    // char *c = &name[0];

    // cout<<"name = "<<name<<endl;
    // cout<<"&name = "<<&name << endl;
    // cout<<"*(name+3) = "<< *(name+3)<<endl;
    // cout<<"c = "<< c<<endl;
    // cout<<"&c = "<<&c<<endl;
    // cout<<"*(c+3) = "<<*(c+3)<<endl;
    // cout<<"c+2 = "<<c+2<<endl;
    // cout<<"*c = "<<*c<<endl;
    // cout<<"c+8 = "<<c+8<<endl;


    int arr[10] = {1,2,3,4};
    cout<<"size of = "<<sizeof(arr)<<endl;
    solve(arr);
    
    return 0;
}