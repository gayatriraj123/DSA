#include<iostream>
#include<stack>
#include<limits.h>
#include<vector>
using namespace std;

vector<int> prevsmaller(vector<int> &v)
{
    stack<int> s;
    s.push(-1);

    vector<int> ans(v.size());
    for(int i = 0; i<v.size();i++)
    {
        int curr = v[i];

        while(s.top() != -1 && v[s.top()] >= curr)
        {
            s.pop();
        }

        ans[i] = s.top();

        s.push(i);      //insert the index of element
    }
    return ans;
}

vector<int> nextsmaller(vector<int>& v)
{
    stack<int> s;
    s.push(-1);

    vector<int>ans(v.size());

    for(int i= v.size()-1; i>=0; i--)
    {
        int curr = v[i];
        //check the ans in stack
        while(s.top() != -1 && v[s.top()] >= curr)
        {
            s.pop();
        }
        // we have a find smaller ele,,, store in ans 
        ans[i] = s.top();
        //push the element
        s.push(i);
    }
    return ans;
}

int getRectangularArearHistogram(vector<int> &height)
{
    //step 1 prev smaller ouput
    vector<int> prev = prevsmaller(height);

    //step 2 next smaller output
    vector<int> next = nextsmaller(height);

    int maxArea = INT_MIN;
    int size = height.size();

    for(int i=0; i<height.size(); i++)
    {
        int length = height[i];
        
        if(next[i] == -1)
        {
            next[i] = size;
        }
        int width = next[i] - prev[i] - 1;

        int area = length * width;
        maxArea = max(maxArea, area);
    }
    return maxArea;
}

int main()
{
    vector<int> v;
    v.push_back(2);
    v.push_back(1);
    v.push_back(5);
    v.push_back(6);
    v.push_back(2);
    v.push_back(3);

    cout<<" ans is :"<<getRectangularArearHistogram(v)<<endl;

    return 0;
}