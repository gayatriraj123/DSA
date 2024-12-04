#include<iostream>
#include<stack>
using namespace std;

void insertSorted(stack<int> &s, int target)
{
    //base case also
    if(s.empty())
    {
        s.push(target);
        return;
    }
    //base case
    if(s.top() >= target)
    {
        s.push(target);
        return;
    }

    int topEle = s.top();
    s.pop();

    insertSorted(s, target);

    //backtrack
    s.push(topEle);
}

void sorted(stack<int> &s)
{
    //base case
    if(s.empty())
    {
        return;
    }

    int topEle = s.top();
    s.pop();

    sorted(s);

    insertSorted(s, topEle);
}


int main()
{
    stack<int> s;
    s.push(7);
    s.push(11);
    s.push(3);
    s.push(5);
    s.push(9);

    sorted(s);
    cout<<"Printing"<<endl;

    while(!s.empty())
    {
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<endl;

    return 0;
}