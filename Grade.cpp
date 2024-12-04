#include<iostream>
using namespace std;

char getGrade(int n)
{
    // if(n>=90)
    // {
    //     return 'A';
    // }
    // else if(n>=80)
    // {
    //     return 'B';
    // }
    // else if(n>=70)
    // {
    //     return 'C';
    // }
    // else if(n>=60)
    // {
    //     return 'D';
    // }
    // else 
    // {
    //     return 'F';
    // }

    switch(n/10)
    {
        case 10: return 'A';break;
        case 9 :return 'A';break;
        case 8 :return 'B';break;
        case 7 :return 'C';break;
        case 6 :return 'D';break;
        default :return 'F';
    }

}


int main()
{
    int marks;
        // cout<<"enter the marks :"<<endl;
        // cin>>marks;
    // char finalgrade = getGrade(marks);
    // cout<<finalgrade<<endl;
    for(int i=1;i<=100;i++)
    {
        char ans = getGrade(i);
        cout<<"Grade of marks = "<<i<<" is "<<ans<<endl;
    }

    return 0;
}