#include<iostream>
#include<queue>
#include<stack>
using namespace std;

void revetrseQueue(queue<int> &q)
{
    stack<int> s;

    //step 1 put all element in stack
    while(!q.empty())
    {
        int element = q.front();
        q.pop();
        s.push(element);
    }
    //step 2 put all elememnt stack into q
    while(!s.empty())
    {
        int element = s.top();
        s.pop();

        q.push(element);
    }
}

void reverse(queue<int> &q)
{
    //base case
    if(q.empty())
    {
        return;
    }
    //step 1
    int temp = q.front();
    q.pop();

    reverse(q);

    q.push(temp);

}

void reverseK(queue<int> &q, int k)
{
    // step 1 queueinto stack
    stack<int> s;
    int count = 0;
    int n = q.size();
    if(k <= 0 || k>n)
    {
        return;
    }
    while(!q.empty())
    {
        int temp = q.front();
        q.pop();
        s.push(temp);
        count++;

        if(count == k)
        {
            break;
        }
    }
    //step 2 stack into wueue
    while(!s.empty())
    {
        int temp = s.top();
        s.pop();
        q.push(temp);

    }
    count = 0;
    while(!q.empty() && n-k != 0)
    {
        int temp = q.front();
        q.pop();
        q.push(temp);
        count++;

        if(count == n-k)
        {
            break;
        }

    }
}

void interLeave(queue<int> &q)
{
    // step 1 saperate two half
    int n = q.size();
    if(q.empty())
    {
        return;
    }

    int k = n/2;
    int count = 0;
    queue<int> q2;

    while(!q.empty())
    {
        int temp = q.front();
        q.pop();
        q2.push(temp);
        count++;
        if(count == k)
        {
            break;
        }
    }

    //step: interleaing
    while(!q.empty() && !q2.empty())
    {
        int first = q2.front();
        q2.pop();

        q.push(first);

        int second = q.front();
        q.pop();
        q.push(second);
    }

    //odd case
    if(n&1)
    {
        int element = q.front();
        q.pop();
        q.push(element);
    }
}

int main()
{
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6);
    q.push(7);

    // reverseK(q, 6);
    interLeave(q);

    // cout<<"print the element after reverse recursivly"<<endl;
    while(!q.empty())
    {
        cout<<q.front()<<" ";
        q.pop();
    }
    cout<<endl;

    return 0;
}