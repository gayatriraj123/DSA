#include<iostream>
#include<queue>
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

void LOT(Node* root)
{
    queue<Node*> q;
    //initilly
    q.push(root);
    q.push(NULL);
    while(!q.empty())
    {
        //A
        Node* temp = q.front();

        q.pop();

        if(temp == NULL)
        {
            cout<<endl;
            if(!q.empty())
            {
                q.push(NULL);
            } 
        }
        else
        {
            //C
            cout<<temp->data<<" ";
            //D
            if(temp->left)
            {
                q.push(temp->left);
            }
            if(temp->right)
            {
                q.push(temp->right);
            }
        }
       
    }

}

void inorderTraversal(Node* root)
{
    if(root == NULL)
    {
        return;
    }
    //LNR
    inorderTraversal(root -> left);
    cout<<root->data<<" ";
    inorderTraversal(root -> right);
}
void PreTraversal(Node* root)
{
    if(root == NULL)
    {
        return;
    }
    //NLR
    cout<<root->data<<" ";

    PreTraversal(root -> left);
    
    PreTraversal(root -> right);
}

void postTraversal(Node* root)
{
    if(root == NULL)
    {
        return;
    }
    //LRN
    postTraversal(root -> left);
    
    postTraversal(root -> right);

    cout<<root-> data <<" ";
}

int height(Node* root)
{
    if(root == NULL)
    {
        return 0;
    }
    int leftHeight = height(root->left);
    int rightheight = height(root->right);

    int ans = max(leftHeight, rightheight) + 1;

    return ans;
}

int main()
{
    Node* root = NULL;
    root = BuildTree();

    LOT(root);
    cout<<"height of: "<<height(root)<<endl;
    return 0;
}
