#include<iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int data)
    {
        this -> data = data;
        left = NULL;
        right = NULL;
    }

};

Node* BuildTree()
{
    int data;
    cout<<"enter the data: "<<endl;
    cin>>data;

    if(data == -1)
    {
        return NULL;
    }
    //otherwise step a, b, c
    Node* root = new Node(data);

    root -> left = BuildTree();
    root -> right = BuildTree();

    return root;

}

int main()
{
    Node* root = NULL;
    root = BuildTree();

    return 0;
}
