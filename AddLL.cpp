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

Node* reverse(Node* head)
{
    Node* prev = NULL;
    Node* curr = head;
    Node* Next = curr -> next;

    while(curr != NULL)
    {
        Next = curr -> next;
        curr -> next = prev;
        prev = curr;
        curr = Next;
    }
    return prev;
}

Node* solve(Node* & head1, Node* &head2)
{
    // step1 revrse LL 
    head1 = reverse(head1);
    head2 = reverse(head2);

    // /step2add LL
    Node* anshead = NULL;
    Node* anstail = NULL;
    int carry = 0;

    while(head1 != NULL && head2 != NULL)
    {
        int sum = carry + head1 -> data + head2 -> data;
        int digit = sum % 10;
        carry = sum / 10;

        //create new node for digit
        Node* newNode = new Node(digit);
        // attach the new node to ans LL
        if(anshead == NULL)
        {
            anshead = newNode;
            anstail = newNode;
        }
        else
        {
            anstail -> next = newNode;
            anstail = newNode;
        }
        head1 = head1 -> next;
        head2 = head2 -> next;
    }
    //if head 1 me node baki ho tab 
    while(head1 != NULL)
    {
        int sum = carry + head1 -> data;
        int digit = sum % 10;
        carry = sum / 10;
        Node* newNode = new Node(digit);
        anstail -> next = newNode;
        anstail = newNode;
        head1 = head1 -> next;
    }
    //if head2 me node baki hotab 
    while(head2 != NULL)
    {
        int sum = carry + head2 -> data;
        int digit = sum % 10;
        carry = sum / 10;
        Node* newNode = new Node(digit);
        anstail -> next = newNode;
        anstail = newNode;
        head2 = head2 -> next;
    }
    //if carry ramains 
    while(carry != 0)
    {
        int sum = carry;
        int digit = sum % 10;
        carry = sum / 10;
        Node* newNode = new Node(digit);
        anstail -> next = newNode;
        anstail = newNode;

    }

    anshead = reverse(anshead);
    return anshead;
}

int main()
{
    Node* head1 = new Node(9);
    Node* second1 = new Node(9);
    head1 -> next = second1;

    Node* head2 = new Node(7);
    Node* second2 = new Node(2);
    Node* third2 = new Node(2);
    head2 -> next = second2;
    second2 -> next = third2;

    // Node* fourth = new Node(0);
    // Node* fifth = new Node(0);
    // Node* sixth = new Node(0);
    // head -> next = second;
    // second -> next = third;
    // third -> next = fourth;
    // fourth -> next = fifth;
    // fifth -> next = sixth;
    // cout<<" Input LL"<<endl;
    // print(head1);

//    sort012(Node* head)
    Node* ans = solve(head1, head2);
    print(ans);
}