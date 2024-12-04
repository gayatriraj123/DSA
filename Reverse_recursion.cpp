#include<iostream>
#include<string>
using namespace std;

void solve(string &s, int start, int end)
{
    // base case
    if(start >= end)
    {
        return;
    }
    // one case
    swap(s[start], s[end]);

    // recursion
    solve(s, start+1, end-1);
}

int main()
{
    string s;
    cin>>s;
    int start = 0;
    int end = s.size()-1;
    solve(s, start, end);
    cout<<s<<endl ;
    return 0;
}