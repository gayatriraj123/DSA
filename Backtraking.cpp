#include<iostream>
usng namespace std;

void print(string &str, int i)
{
    if(i >= str.length)
    {
        cout<<str<<" ";
        return;
    }
    //swapping
    for(int j=i;j<str.length;j++)
    {
        swap(str[i], str[j]);
        //recursion call
        print(str, i+1);
    }
}

int main()
{
    string str = "sbc";
    int i=0;
    print(str,i);
    return 0;

}