#include<iostream>
#include<stack>
#include<vector>
using namespace std;

vector<int> prevsmaller(vector<int> &v)
{
    stack<int>s;
    s.push(-1);

    vector<int> ans(v.size());
    for(int i = 0; i<v.size();i++)
    {
        int curr = v[i];

        while(s.top() >= curr)
        {
            s.pop();
        }

        ans[i] = s.top();

        s.push(curr);
    }
    return ans;
}

vector<int> nextsmaller(vector<int>& v)
{
    stack<int>s;
    s.push(-1);

    vector<int>ans(v.size());

    for(int i= v.size()-1; i>=0; i--)
    {
        int curr = v[i];
        //check the ans in stack
        while(s.top() >= curr)
        {
            s.pop();
        }
        // we have a find smaller ele,,, store in ans 
        ans[i] = s.top();
        //push the element
        s.push(curr);
    }
    return ans;
}

int main()
{
    vector<int> v;
    v.push_back(2);
    v.push_back(1);
    v.push_back(4);
    v.push_back(3);

   
    vector<int> ans1 = nextsmaller(v);

    //print
    cout<<" printing ans 1"<<endl;
    for(int i=0;i<=v.size()-1;i++)
    {
        cout<<ans1[i]<<" ";
    }
    cout<<endl;

    cout<<" printing ans 2"<<endl;
    vector<int> ans2 = prevsmaller(v);

    for(int i=0;i<v.size();i++)
    {
        cout<<ans2[i]<<" ";
    }
    cout<<endl;

    return 0;
}