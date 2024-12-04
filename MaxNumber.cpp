#include<iostream>
using namespace std;

int main()
{
    int a,b,c;

    cout<<"enter the three numbers"<<endl;
    cin>>a>>b>>c;
   {
     cout<<a<<" is greater"<<endl;
   }
   else if((b>a)&&(b>c))
   {
    cout<<b<<" is greater"<<endl;
   }
   else
   {
    cout<<c<<"is greater"<<endl;
   }
 
    return 0;
    
}