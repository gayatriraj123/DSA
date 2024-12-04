#include<iostream>
using namespace std;


class Node {
    public:
    int data;
    Node* prev;
    Node* next;

    Node()
    {
        this ->data = 0;
        this ->prev = NULL;
        this ->next = NULL;
    }

    Node(int data)
    {
        this ->data = data;
        this ->prev = NULL;
        this ->next = NULL;
    }
    ~Node()
    {
        cout<<"node with value: "<<this->data<<" deleted"<<endl;
    }
};

void print(Node* &head)
{
    Node* temp = head;

    while(temp != NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}

int getLength(Node* head)
{
    Node* temp = head;
    int len = 0;

    while(temp != NULL)
    {
        temp = temp->next;
        len++;
    }
    return len;
}

//inset at head 
void InsertAtHead(Node* &head, Node* &tail, int data)
{
    if(head == NULL)        // to check LL is empty or not
    {
        Node* newNode = new Node(data);
        head = newNode;
        tail = newNode;
        return;
    }
    else
    {
        //LL is not empty
        //step 1 create node
        Node* newNode = new Node(data);

        //step 2
        newNode ->next = head;

        // step 3
        head ->prev = newNode;

        //step 4
        head = newNode;

    }
}

void InsertAtTail(Node* &head, Node* &tail, int data)
{
    // to check LL is empty
    if(head == NULL)
    {
        Node * newNode = new Node(data);
        head = newNode;
        tail = newNode;
        return;
    }
    else
    {
        //LL is not empty
        // step 1
        Node* newNode = new Node(data);

        // step 2 
        tail ->next = newNode;

        // step 3
        newNode ->prev = tail;

        // step 4
        tail = newNode;
    }
}

void InsertAtPosition(Node* &head, Node* &tail, int data, int position)
{
    //to check ll is empty
    if(head == NULL)
    {
        Node * newNode = new Node(data);
        head = newNode;
        tail = newNode;
        return;
    }
    else
    {
        //LL is not empty
        if(position == 1)
        {
            InsertAtHead(head, tail, data);
            return;
        }
        int len = getLength(head);
        if(position > len)
        {
            InsertAtTail(head, tail, data);
            return;
        }

        //insert at middle or at positon
        // step 1 find prev and curr
        int i = 1;
        Node* prevNode = head;
        while(i < position -1)
        {
            prevNode = prevNode ->next;
            i++;
        }
        Node* curr = prevNode ->next;

        //step 2 create node
        Node* newNode = new Node(data);

        //step 3

        prevNode ->next = newNode;
        newNode ->prev = prevNode;
        curr ->prev = newNode;
        newNode ->next = curr;
    }

}

void deleteFromPos(Node* &head, Node* &tail, int position)
{
    if(head == NULL)
    {
        cout<<"LL isalready empty";
        return;
    }
    if(head ->next == NULL)
    {
        //single node
        Node* temp = head;
        head = NULL;
        tail = NULL;
        delete temp;
        return;
    }
    int len = getLength(head);
    if(position > len )
    {
        cout<<" please enter valid len";
    }

    

    if(position == 1)
    {
        ////want to delete the first node
        Node* temp = head;
        head = head ->next;
        head ->prev = NULL;
        temp ->next = NULL;
        delete temp;
        return;
    }
    
    if(position == len)
    {
        //delete te last node
        Node* temp = tail;
        tail = tail ->prev;
        temp ->prev = NULL;
        tail -> next = NULL;
        delete temp;
        return;
    }

    //delete from middle or at position node 
    // step 1 find curr left and right
    int i = 1;
    Node* left = head;
    while(i < position - 1)
    {
        left = left ->next;
        i++;

    }
    Node* curr = left ->next;
    Node* right = curr ->next;

    //step 2
    left ->next = right;
    right -> prev = left;
    curr ->prev = NULL;
    curr ->next = NULL;
    delete curr;

}

int main()
{
    Node* first = new Node(10);
    Node* second = new Node(20);
    Node* third = new Node(30);
    Node* head = first;
    Node* tail = third;

    first ->next = second;
    second ->prev = first;

    second ->next = third;
    third ->prev = second;

    // print(first);
    // cout<<endl;

    InsertAtHead(head, tail, 101);
    // print(head);

    // cout<<endl;

    InsertAtTail(head, tail, 111);
    // print(head);

    // cout<<endl;

    InsertAtPosition(head, tail, 122, 5);
    print(head);
    cout<<endl;

    deleteFromPos(head, tail, 7);
    print(head);

    return 0;
}