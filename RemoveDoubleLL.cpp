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

void removeDubly(Node* &head)
{
    if(head == NULL)
    {
        cout<< " LL is empty"<<endl;
        return;
    }
    if(head -> next == NULL)
    {
        cout<<" LL is only one node"<<endl;
        return;
    }

    // ll has more the one node
    Node* curr = head;

    while(curr != NULL)
    {
        if((curr -> next != NULL) && (curr -> data == curr -> next -> data))
        {
            Node* temp = curr -> next;
            curr -> next = curr -> next -> next;

            temp -> next = NULL;
            delete temp;
        }
        else
        {
            curr = curr -> next;
        }
    }
}

int main()
{
    Node* head = new Node(10);
    Node* second = new Node(20);
    Node* third = new Node(20);
    Node* fourth = new Node(30);
    Node* fifth = new Node(30);
    Node* sixth = new Node(40);
    head -> next = second;
    second -> next = third;
    third -> next = fourth;
    fourth -> next = fifth;
    fifth -> next = sixth;
    cout<<" Input LL"<<endl;
    print(head);

    removeDubly(head);
    print(head);

    return 0;
}