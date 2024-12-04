#include<iostream>
using namespace std;

class Stack {
    public:
    int *arr;
    int size;
    int top1;
    int top2;

    Stack(int size)
    {
        arr = new int[size];
        this -> size = size;
        top1 = -1;
        top2 = size;
    }

    void push1()
    {
        if(top2 - top1 == 1)
        {
            cout<<" stack overflow"<<endl;
        }
        else{
            top1++;
            arr[top2] = data;
        }

    }
    void pop1()
    {
        if(top1 == -1)
        {
            cout<<" stack 1 is undeflow"<<endl;
        }
        else{
            top1--;
        }

    }
    void push2()
    {
        if(top2 - top1 == 1)
        {
            //space not available
            cout<<" stack overflow"<<endl;
        }
        else{
            top2--;
            arr[top2] = data;
        }

    }
    void pop2()
    {
        if(top2 == size)
        {
            cout<<"stack 2 is underflow"<<endl;
        }
        else{
            top2++;
        }

    }
};

int main()
{
    Stack s(10);
    s.push1(10);
    s.push1(20);
    s.push1(30);
    s.push1(40);
    s.push1(50);

    s.push2(28);
    s.push2(269);
    s.push2(29);
    s.push2(25);
    

    return 0;
}