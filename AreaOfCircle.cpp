#include<iostream>
using namespace std;

float circle_area(float rad)
{
    float area = 3.14 * rad * rad;
    return area;
}

int main()
{
    float rad;
    cin>>rad;
    float area = circle_area(rad);
    cout<<"area of circle is "<<area<<endl;
    
}