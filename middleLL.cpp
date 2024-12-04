#include<iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node* next;

    Node(int data)
    {
        this ->data = data;
        this ->next = NULL;
    }
};

void print(Node* head)
{
    Node* temp = head;
    while(temp != NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

Node* getMiddle(Node* &head)
{
    if(head == NULL)
    {
        cout<<"LL is empty"<<endl;
        return head;
    }
    if(head ->next == NULL)
    {
        // only it has 1 node
        // cout<<"LL is empty"<<endl;
        return head;
    }

    // LL has >1 node
    Node* slow = head;
    Node* fast = head;          //for the case 30 ans are we get   
    // Node* fast = head -> next;    // for the ans 40 in that case use 

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

int getLen(Node* &head)
{
    int len = 0;
    Node* temp = head;
    while(temp != NULL)
    {
        temp = temp -> next;
        len++;
    }
    return len;
}

Node* reverseKNode(Node* &head, int k)
{
    if(head == NULL)
    {
        cout<<" LL is empty "<<endl;
        return NULL;
    }
    int len = getLen(head);
    if( k > len)
    {
        cout<<"enter the valid K number "<<endl;
        return head;
    }

    // step A
    Node* prev = NULL;
    Node* curr = head;
    Node* forword = curr -> next;
    int count = 0;
    while(count < k)
    {
        forword = curr -> next;
        curr -> next = prev;
        prev = curr;
        curr = forword;
        count++;
    }
    // step B
    if(forword != NULL)
    {
        head -> next = reverseKNode(forword,k);
    }
    // step C
    return prev;
}

bool checkLoop(Node* &head)
{
    if(head == NULL)
    {
        cout<<" LL is empty" <<endl;
        return false;
    }
    Node* slow = head;
    Node* fast = head;

    while(fast != NULL)
    {
        fast = fast ->next;
        if(fast != NULL)
        {
            fast = fast ->next;
            slow = slow ->next;
        }

        if(slow == fast)
        {
            return true;
        }
    }
    return false;
}


Node* startingPoint(Node* &head)
{
    if(head == NULL)
    {
        cout<<" LL is empty" <<endl;
        return NULL;
    }
    Node* slow = head;
    Node* fast = head;

    while(fast != NULL)
    {
        fast = fast ->next;
        if(fast != NULL)
        {
            fast = fast ->next;
            slow = slow ->next;
        }

        if(slow == fast)
        {
            slow = head;
            break;
        }
    }
    while(slow != fast)
    {
        slow = slow -> next;
        fast = fast -> next;
    }
    return slow;
}

Node* removeLoop(Node* &head)
{
    if(head == NULL)
    {
        cout<<" LL is empty" <<endl;
        return NULL;
    }
    Node* slow = head;
    Node* fast = head;

    while(fast != NULL)
    {
        fast = fast ->next;
        if(fast != NULL)
        {
            fast = fast ->next;
            slow = slow ->next;
        }

        if(slow == fast)
        {
            slow = head;
            break;
        }
    }

    Node* prev = fast;
    while(slow != fast)
    {
        prev = fast;
        slow = slow -> next;
        fast = fast -> next;
    }
    prev -> next = NULL;
    return slow;
}


int main()
{
    Node* head = new Node(10);
    Node* second = new Node(20);
    Node* third = new Node(30);
    Node* fourth = new Node(40);
    Node* fifth = new Node(50);
    Node* sixth = new Node(60);
    Node* seventh = new Node(70);
    Node* eighth = new Node(80);
    Node* ninth = new Node(90);

    head -> next = second;
    second -> next = third;
    third -> next = fourth;
    fourth -> next = fifth;
    fifth -> next = sixth;
    sixth -> next = seventh;
    seventh ->next = eighth;
    eighth ->next = ninth;
    ninth -> next = fourth;
   
    // print(head);
    // head = reverseKNode(head, 3);
    // print(head);
    cout<<" loop are present :"<<checkLoop(head)<<endl;
    cout<<" starting point are :"<<startingPoint(head) -> data<<endl;
    removeLoop(head);
    print(head);
    cout<<" loop are present :"<<checkLoop(head)<<endl;

    // cout<<"middle node is :"<<getMiddle(head) -> data <<endl;
    return 0;
}