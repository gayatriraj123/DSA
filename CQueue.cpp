#include<iostream>
using namespace std;

class CQueue
{
    public:
    int size;
    int front;
    int rear;
    int *arr;

    CQueue(int size)
    {
        this -> size = size;
        arr = new int[size];
        front = -1;
        rear = -1;
    }

    void push(int data)
    {
        //queue full

        // single elememt

        // circular nature

        // normal flow

        if(front == 0 && rear == size - 1)
        {
            cout<<" queue f full cannot insert"<<endl;
        }
        else if(front == -1)
        {
            front = rear = 0;
            arr[rear] = data;
        }
        else if(rear == size - 1 && front != 0)
        {
            rear = 0;
            arr[rear] = data;
        }
        else
        {
            rear++;
            arr[rear] = data;
        }
    }

    void pop()
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
};

int main()
{
    return 0;
}