#include<iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node* next;

    Node()
    {
        this -> data = 0;
        this -> next = NULL;

    }
    Node(int data)
    {
        this -> data = data;
        this -> next = NULL;
    }
    ~Node()
    {
        cout<<"Node with value"<< this-> data<<"delete"<<endl;
    }

};

void InsertAtHead(Node* &head,Node* &tail, int data)
{
    Node* newNode = new Node(data);
    
    newNode -> next = head;

    if(head == NULL)
    {
        tail = newNode;
    }

    head = newNode;
}

void InsertAtTail(Node* &head,Node* &tail , int data)
{
    Node* newNode = new Node(data);

    if(tail == NULL)
    {
        tail = newNode;
        head = newNode;
    }
    else
    {
        tail ->next = newNode;
    }


    tail = newNode;

}

int findLen(Node* &head)
{
    Node* temp = head;

    int len = 0;
    while(temp != NULL)
    {
        temp = temp -> next;
        len++;

    }
    return len;
}

void InerstAtPosition(Node* &head, Node* &tail, int position, int data)
{
    // find the postion
    if(head == NULL)
    {
        Node* newNode = new Node(data);
        head = newNode;
        tail = newNode;
        return;
    }

    if(position == 0)
    {
        InsertAtHead(head, tail, data);
        return;
    }
    int len = findLen(head);
    if(position >= len)
    {
        InsertAtTail(head, tail, data);
        return;
    }

    // find prev amd curr
    int i = 1;
    Node* prev = head;
    while(i < position)
    {
        prev = prev -> next;
        i++;
    }
    Node* curr = prev -> next;

    Node* newNode = new Node(data);

    newNode -> next = curr;

    prev -> next = newNode;
}

void print(Node* &head)
{
    Node* temp = head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }

}

void deleteNode(int position, Node* &head, Node* tail)
{
    if(head == NULL){
        cout<<"cannot delete head";
        return;
    }
    if(position == 1)
    {
        Node* temp =head;
        head = head -> next;
        temp -> next = NULL;
        delete temp;
        return;
    }

    int len = findLen(head);
    if(position == len)
    {
        // find prev
        int i = 1;
        Node* prev = head;
        while(i < position -1)
        {
            prev = prev -> next;
            i++;
        }
        prev -> next = NULL;

        Node* temp = tail;

        tail = prev;

        delete temp;
        return;
    }

    // middle
    // find prev and curr b
    Node* prev = head;
    int i = 1;
    while(i < position - 1)
    {
        prev -> next;
        i++;
    }
    Node* curr = prev -> next;

    prev -> next = curr -> next;

    curr -> next = NULL;

    delete curr;
}

int main()
{
    Node* head = NULL;
    Node* tail = NULL;

    InsertAtHead(head, tail, 20);
    InsertAtHead(head, tail, 50);
    InsertAtHead(head,tail, 60);
    InsertAtHead(head,tail,  90);

    InsertAtTail(head, tail, 100);

    print(head);
    cout<<endl;

    // InerstAtPosition(head, tail, 7, 101);  

    // print(head);
    deleteNode(2, head, tail);
    print(head);
    cout<<endl;  

    return 0;
}

