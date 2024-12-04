#include<iostream>
using namespace std;

void print(string &str, int i)
{
    if(i >= str.length())
    {
        cout<<str<<" ";
        return;
    }
    //swapping
    for(int j=i;j<str.length();j++)
    {
        swap(str[i], str[j]);
        //recursion call
        print(str, i+1);
        //Backtraking  ->Why?
        swap(str[i], str[j]);
    }
}

int main()
{
    string str = "abc";
    int i=0;
    print(str,i);
    return 0;

}