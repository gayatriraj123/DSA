#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int data)
    {
        this -> data = data;
        this -> next = NULL;
    }
};

void print(Node* &head)
{
    Node* temp = head;
    while(temp != NULL)
    {
        cout<<temp -> data <<" ";
        temp = temp -> next;
    }
    cout<<endl;
}

void sort012(Node* &head )
{
    int zero = 0;
    int one = 0;
    int two = 0;

    Node* temp = head;

    while(tem y)
}


int main()
{
    Node* head = new Node(1);
    Node* second = new Node(2);
    Node* third = new Node(2);
    Node* fourth = new Node(0);
    Node* fifth = new Node(0);
    Node* sixth = new Node(0);
    head -> next = second;
    second -> next = third;
    third -> next = fourth;
    fourth -> next = fifth;
    fifth -> next = sixth;
    cout<<" Input LL"<<endl;
    print(head);

   sort012(Node* head)
}