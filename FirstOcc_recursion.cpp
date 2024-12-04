#include<iostream>
#include<string>
using namespace std;

// left to right

void lastOcc(string s, char x, int i, int &ans)
{
    // base case
    if(i >= s.size())
    {
        return;
    }
    if(s[i] == x)
    {
        ans = i;
    }
    lastOcc(s, x, i+1, ans);
}

// right to left

void lastOccRTL(string s, char x, int i, int &ans)
{
    // base case
    if(i < 0)
    {
        return;
    }
    if(s[i] == x)
    {
        ans = i;
        return;
    }
    lastOccRTL(s, x, i-1, ans);
}

int main()
{
    string s;
    cin>>s;

    char x;
    cin>>x;
    int ans = -1;
    lastOccRTL(s, x, s.size()-1, ans);
    cout<<ans<<endl;
    return 0;
}