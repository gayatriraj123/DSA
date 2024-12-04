#include<iostream>
using namespace std;

class Deque
{
    public:
    int *arr;
    int size;
    int front;
    int rear;

    Deque(int size)
    {
        this -> size = size;
        arr = new int[size];
        front = -1;
        rear = -1;
    }

    void pushRear(int data)
    {
        //queue full

        // single elememt

        // circular nature

        // normal flow

        if(front == 0 && rear == size - 1)
        {
            cout<<" queue f full cannot insert"<<endl;
            return;
        }
        else if(front == -1)
        {
            front = rear = 0;
        }
        else if(rear == size - 1 && front != 0)
        {
            rear = 0;
        }
        else
        {
            rear++;
        }
        arr[rear] = data;
    }

    void pushFront(int data)
    {
        //queue full

        // single elememt

        // circular nature

        // normal flow

        if(front == 0 && rear == size - 1)
        {
            cout<<" queue f full cannot insert"<<endl;
            return;
        }
        else if(front == -1)
        {
            front = rear = 0;
        }
        else if(front == 0 && rear != size-1)
        {
            front = size-1;
        }
        else
        {
            front--;
        }
        arr[front] = data;
    }

    void popFront()
    {
        //check empty or not
        //single element
        // circular nature
        //default flow
        if(front == -1)
        {
            cout<<" q is not empty, cannot pop"<<endl;
        }
        else if(front == rear)
        {
            arr[front] = -1;
            front = -1;
            rear = -1;
        } 
        else if(front == size -1)
        {
            front = 0;
        }
        else{
            front++;
        }
    }

    void popRear()
    {
        if(front == -1)
        {
            cout<<" q is not empty, cannot pop"<<endl;
        }
        else if(front == rear)
        {
            arr[front] = -1;
            front = -1;
            rear = -1;
        } 
        else if(rear == 0)
        {
            rear = size-1;
        }
        else{
            rear--;
        }
    }
};

int main()
{
    Deque dq(10);
    dq.pushRear(10);
    dq.pushRear(20);
    dq.pushRear(30);
    dq.pushRear(40);
    dq.pushRear(50);
    dq.pushRear(60);

    cout<<" front element is"<<dq.front()
    
    return 0;
}