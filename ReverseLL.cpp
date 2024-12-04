#include<iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node* next;

    Node()
    {
        this->data= 0;
        this->next = NULL;
    }
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
    ~Node()
    {
        cout<<"Node with value: "<<this->data<<" deleted" <<endl;
    }
};

//i want to add node right at the head of LL 
void insertAtHead(Node* &Head,Node* &Tail, int data)
{
    //check empty LL
    if(Head == NULL)
    {
        Node* NewNode = new Node(data);
        Head = NewNode;
        Tail = NewNode;
    }
    else
    {
    //step 1
    Node* NewNode = new Node(data);
    //step 2
    NewNode ->next = Head;
    // step 3
    Head = NewNode;

    }
   
}

//i want to add insert the node at the left or end of the LL
void insertAtTail(Node* &Head, Node* &Tail, int data)
{
     //check empty LL
    if(Head == NULL)
    {
        Node* NewNode = new Node(data);
        Head = NewNode;
        Tail = NewNode;
        return;
    }
    //step1
    Node* NewNode = new Node(data);
    //step2
    //Non- empty wala case
    Tail->next = NewNode;
    
    //step3
    Tail = NewNode;  
}

int findLength(Node* &Head)
{
        int len = 0;
        Node* temp = Head;
        while(temp!= NULL)
        {
            temp = temp->next;
            len++;
        }
        return len;
}

//i want to insert the node in between the two node or at position
void insertAtPosition(int data, int position, Node* &Head, Node* &Tail)
{
    //check LL are empty or not
    if(Head == NULL)
    {
        Node* NewNode = new Node(data);
        Head = NewNode;
        Tail = NewNode;
        return;
    }

    //Handle the 0th and last postion 
    if(position == 0)
    {
        insertAtHead(Head, Tail, data);
        return;
    }

    int len = findLength(Head);
    if(position >= len)
    {
        insertAtTail(Head, Tail, data);
        return;
    }

    //step 1 find the position: curr, prev
    int i = 1;
    Node* prev = Head;
    while(i<position)
    {
        prev = prev->next;
        i++;
    }
    Node* curr = prev->next;

    // step 2:
    Node* NewNode = new Node(data);

    // step 3:
    NewNode -> next = curr;
    // step 4
    prev->next = NewNode;

    
}

//print the LL
void print(Node* head)
{
    Node* temp = head;
    while(temp!= NULL)
    {
        cout<<temp->data << " ";
        temp=temp->next;
    }

}

void deleteNode(int position, Node* &Head, Node* &Tail)
{
    if(Head == NULL)
    {
        cout<<"Cannot delete, LL is empty";
        return;
    }
    if(position == 1)
    {
        // step 1
        Node* temp = Head;
        // step 2
        Head = Head -> next;
        // step 3
        temp ->next = NULL;
        // step4
        delete temp;
    }

    int len = findLength(Head);
    //deleteing last node
    if(position == len)
    {
        //step 1: find prev
        int i = 1;
        Node* prev = Head;
        while(i<position -1)
        {
            prev = prev ->next;
            i++;

        }
        // step2
        Node* temp = Tail;
        prev -> next = NULL;
        // step 3
        Tail = prev;
        // step 4
        delete temp;
        return;
    }

    //deleting middle node

    // step 1:find prev and curr
    int i = 1;
    Node* prev = Head;
    while(i < position - 1 )
    {
        prev = prev ->next;
        i++;
    }
    Node* curr = prev ->next;
    // step 2
    prev ->next = curr ->next;
    // step 3
    curr ->next = NULL;
    // step 4
    delete curr;


}

Node* reverse(Node* &prev, Node* &curr)
{
    //base case
    if(curr == NULL)
    {
        return prev;
    }

    // 1 case solve and other solve are recursion
    Node* Next = curr ->next;
    curr -> next = prev;

    reverse(curr, Next);
}


int main()
{
    Node* Head = NULL;
    Node* Tail = NULL;
    insertAtHead(Head,Tail, 20);
    insertAtHead(Head,Tail, 30);
    insertAtHead(Head,Tail, 40);
    insertAtHead(Head,Tail, 50);
    insertAtTail(Head, Tail, 77);
    print(Head);

    // insertAtPosition(100, 7, Head, Tail);
    cout<<endl;
    // print(Head);

    // deleteNode(2, Head, Tail);
    cout<<endl;
    print(Head);

    Node* prev = NULL;
    Node* curr = Head;
    Head = reverse(prev, curr);
    cout<<endl;
    print(Head);
    cout<<endl;

    return 0;
}