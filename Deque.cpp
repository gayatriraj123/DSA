#include<iostream>
#include<deque>
using namespace std;

int main()
{
    deque<int> dq;
    dq.push_front(2);
    dq.push_front(3);
    dq.push_back(4);
    dq.push_back(5);

    cout<<"size: "<<dq.size()<<endl;
    cout<<"front: "<<dq.front()<<endl;
    cout<<"back: "<<dq.back()<<endl;
    return 0;
}