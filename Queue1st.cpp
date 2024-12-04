#include<iostream>
#include<queue>
using namespace std;

int main()
{
    queue<int> q;
    q.push(4);
    q.push(5);
    q.push(8);
    q.push(9);

    //size
    cout<<"size of queue = "<<q.size()<<endl;

    q.pop();
    cout<<"size of queue = "<<q.size()<<endl;
    if(q.empty())
    {
        cout<<"empty"<<endl;
    }
    else
    {
        cout<<"not empty"<<endl;
    }
    cout<<"front element is : "<<q.front()<<endl;
    return 0;
}