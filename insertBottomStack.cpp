#include<iostream>
#include<stack>
using namespace std;

void solve(stack<int> &s, int target)
{
    //base case
    if(s.empty())
    {
        s.push(target);
        return;
    }

    int topEle = s.top();
    s.pop();
    solve(s, target);

    //backtrack
    s.push(topEle);
}

void insertAtBotttom(stack<int> &s)
{
    if(s.empty())
    {
        cout<<" stack is underflow"<<endl;
        return;
    }
    int target = s.top();
    s.pop();
    solve(s, target);
}

int main()
{
    stack<int> s;

    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    // s.push(60);
    // s.push(70);

    insertAtBotttom(s);
    cout<<"print the element:"<<endl;

    while(!s.empty())
    {
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<endl;

    return 0;
}