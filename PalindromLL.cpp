#include<iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node* next;

    Node(int data)
    {
        this -> data = data;
        this -> next = NULL;
    }
};

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

bool checkPali(Node* &head)
{
    if(head == NULL)
    {
        cout<<" LL is empty"<<endl;
        return true;
    }

    if(head -> next == NULL)
    {
        //only 1 node are available
        return true;
    }
    // step 1 find middle
    Node* slow = head;
    Node* fast = head -> next;

    while(fast != NULL)
    {
        fast = fast -> next;
        if(fast != NULL)
        {
            fast = fast -> next;
            slow = slow -> next;

        }
    }
    //slow are on middlw node
    //step reverse after middle node
    Node* reverseLLHead = reverse(slow -> next);

    slow -> next = reverseLLHead;

    // step 3 compare
    Node* temp1 = head;
    Node* temp2 = reverseLLHead;

    while(temp2 != NULL)
    {
        if(temp1 -> data != temp2 -> data)
        {
            return false;
        }
        else
        {
            temp1 = temp1 -> next;
            temp2 = temp2 -> next;
        }
    }
    return true;


}


int main()
{
    Node* head = new Node(10);
    Node* second = new Node(20);
    Node* third = new Node(30);
    Node* fourth = new Node(20);
    Node* fifth = new Node(10);
    Node* sixth = new Node(60);
    head -> next = second;
    second -> next = third;
    third -> next = fourth;
    fourth -> next = fifth;
    fifth -> next = sixth;

    bool isPali = checkPali(head);

    if(isPali)
    {
        cout<<"Poalindram are Linked List"<< endl;
    }
    else
    {
        cout<<" LL is not palindom"<<endl;
    }

    return 0;
}