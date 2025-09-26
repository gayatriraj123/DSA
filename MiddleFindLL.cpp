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

};

void print(Node* &head)
{
    Node* temp = head;
    while(temp != NULL)
    {
        cout<<temp-> data<<" ";
        temp = temp -> next;
    }
    cout<<endl;
}

Node* getMiddle(Node* &head)
{
    if(head == NULL)
    {
        cout<<"LL is emty"<<endl;
        return head;
    }
    if(head -> next == NULL)
    {
        return head;
    }

    Node* slow = head;
    Node* fast = head;

    while(slow != NULL && fast != NULL)
    {
        fast = fast -> next;
        if(fast != NULL)
        {
            fast = fast -> next;
            slow = slow -> next;
        }
    }
    return slow;
}

int findLen(Node* &head)
{
    int len = 0;
    Node* temp= head;
    while(temp != NULL)
    {
        temp = temp -> next;
        len++;
    }
    return len;
}

Node* reverse(Node* &head, int k)
{
    if(head == NULL)
    {
        cout<<"LL is empty"<<endl;
        return NULL;
    }
    int len = findLen(head);
    if(k > len)
    {
        cout<<"enter valid k "<<endl;
        return head;
    }

    //if LL is > k
    // revser furst k nodes
    Node* prev = NULL;
    Node* curr = head;
    Node* nextone = curr -> next;
    int count = 0;
    while(count < k)
    {
        nextone = curr -> next;
        curr -> next = prev;
        prev = curr;
        curr = nextone;
        count++;
    }

    if(nextone != NULL)
    {
        head -> next = reverse(nextone, k);
    }

    return prev;

}


int main()
{
    Node* head = new Node(10);
    Node* second = new Node(20);
    Node* third = new Node(30);
    Node* fourth = new Node(40);
    Node* fifth = new Node(50);
    Node* sixth = new Node(60);

    head -> next = second;
    second -> next = third;
    third -> next = fourth;
    fourth -> next = fifth;
    fifth -> next = sixth;
    sixth -> next = NULL;

    print(head);

    // cout<<"middle are "<<getMiddle(head) -> data <<endl;
    head = reverse(head, 3);
    print(head);


    return 0;
}

