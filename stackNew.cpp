#include<iostream>
using namespace std;
 
class Stack{
    public:
    int *arr;
    int top;
    int size;
    
    Stack(int size)
    {
        arr = new int[size];
        this-> size = size;
        top = -1;
    }

    void push(int data)
    {
        if(size - top > 1)
        {
            //space available
            top++;
            arr[top] = data;
        }
        else{
            cout<<" space not available"<<endl;
        }
    }   

    void pop()
    {
        if(top == -1)
        {
            //stack is empty
            cout<<" stack underflow, can't delete"<<endl;
        }
        else{
            //stack is not empty
            top--;
        }

    }

    int Top()
    {
        if(top == -1)
        {
            cout<<" stack is empty"<<endl;
        }
        else{
            return arr[top];
        }
    }

    int getSize()
    {
        return top + 1;

    }

    bool isEmpty()
    {
        if(top == -1)
        {
            // cout<<" stack is empty"<<endl;
            return true;
        }
        else{
            return false;
        }
    }
};

int main()
{
    Stack s(10);
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);


    while(!s.isEmpty())
    {
        cout<<s.Top()<<" ";
        s.pop();
    }
    cout<<endl;
    cout<<" size of "<<s.getSize()<<endl;
    return 0;
}