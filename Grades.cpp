#include<iostream>
using namespace std;

char getGrade(int n)
{
    if(n>=90)
    {
        return 'A';
    }
    else if(n>=80)
    {
        return 'B';
    }
    else if(n>=70)
    {
        return 'C';
    }
    else if(n>=60)
    {
        return 'D';
    }
    else 
    {
        return 'F';
    }

}


int main()
{
    int marks;
    cout<<"enter the marks :"<<endl;
    cin>>marks;
    char finalgrade = getGrade(marks);
    cout<<finalgrade<<endl;

    return 0;
}