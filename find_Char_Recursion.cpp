#include<iostream>
#include<limits.h>
using namespace std;

bool check(string str,int i, int n, char key)
{
    if(i>=n)
    {
        return false;
    }
    if(str[i] == key)
    {
        return true;
    }
    return check(str, i+1, n, key);

}

int main()
{
    string str= "lovebabbar";
    int n = str.length();

    char key = 'r';
    int i=0;

    bool ans = check(str,i, n, key);

    cout<<"ans is "<<ans<<endl;
   
   
    return 0;
}