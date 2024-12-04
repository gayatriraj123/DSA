#include<iostream>
using namespace std;

int main()
{
    int a,b,c;
    cout<<"Enter the sides of tringle"<<endl;
    cin>>a>>b>>c;

    if(((a+b)>c)&&((b+c)>a)&&((b+c)>a))
    {
        cout<<"tringle is valid"<<endl;
    }
    else
    {
        cout<<"tringle is not valid"<<endl;

    }
    return 0;
}