#include<iostream>
using namespace std;

class Queue{
    public:
    int *arr;
    int front;
    int rear;
    int size;

    Queue(int size)
    {
        this -> size = size;
        arr = new int[size];
        front = 0;
        rear = 0;
    }

    void push(int data)
    {
        //it will frirst check q in full or not before insertion
        if(rear == size)
        {
            cout<<" queue is full"<<endl;
        }
        else{
            arr[rear] = data;
            rear++;
        }
    }
    void pop()
    {
        if(front == rear)
        {
            cout<<" queue is empty"<<endl;
        }
        else
        {
            arr[front] = -1;
            front++;
            if(front == rear)
            {
                front = 0;
                rear = 0;
            }
        }
    }
    int getFront()
    {
        if(front == rear)
        {
            cout<<" queue is empty"<<endl;
        }
        else
        {
            return arr[front];
        }
    }
    bool isEmpty()
    {
        if(front == rear)
        {
            // cout<<"queue is empty"<<endl;
            return true;
        }
        else{
            // cout<<"queue is not empty"<<endl;
            return false;
        }
    }

    int getSize()
    {
        return rear - front;
    }
};

int main()
{
    Queue q(10);
    q.push(5);
    q.push(23);
    q.push(45);
    q.push(34);

    cout<<"size of queue in : "<<q.getSize()<<endl;
    q.pop();
    cout<<"size of queue in : "<<q.getSize()<<endl;

    cout<<"front elememgt of queue in : "<<q.getFront()<<endl;

    if(q.isEmpty())
    {
        cout<<"queue is empty"<<endl;
    }
    else{
        cout<<"queue is not empty"<<endl;
    }
   
    return 0;
}