#include<iostream>
using namespace std;

int main()
{
    int i,r,c;
    for(r=0;r<3;r++)
    {
        if(r==0||r==2)
        {
            for(c=0;c<5;c++)
            {
                cout<<"*"<<" ";
            }
        }
        else
        {
            cout<<"*"<<" ";      //1 star
            for(i=0;i<3;i++)
            {
                cout<<" "<<" ";      //middle spaces
            }
            cout<<"*";      //last star
        }
        cout<<endl;
    }
    return 0;
}