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

int findPosition(int arr[], int n, int element)
{
    for(int i=0; i<n; i++)
    {
        if(arr[i] == element)
        {
            return i;
        }
    }
    return -1;
}

//buld tree inorde and preorder traversal
Node* BuildInAndPre(int inorder[], int preorder[], int size, int &preindex, int inorderstart, int inorderend)       //one thing remember . never change the sequence as a parameter
{
    //base case
    if(preindex >= size || inorderstart > inorderend)
    {
        return NULL;
    }

    // step 1
    int element = preorder[preindex++];
    Node* root = new Node(element);

    int pos = findPosition(inorder, size, element);
    //step 2 root left
    root-> left = BuildInAndPre(inorder, preorder, size, preindex, inorderstart, pos-1);

    root-> right = BuildInAndPre(inorder, preorder, size, preindex, pos+1, inorderend);

    return root;

}


//buld tree inorder and postorder traversal
Node* BuildInAndPost(int inorder[], int postorder[], int &postindex, int size, int inorderstart, int inorderend)
{
    //BC
    if(postindex < 0 || inorderstart > inorderend)
    {
        return NULL;
    }
    int element = postorder[postindex];
        postindex--;

        Node* root = new Node(element);
        int pos = findPosition(inorder, size, element);

        root -> right = BuildInAndPost(inorder, postorder, postindex, size, pos + 1, inorderend);

        root -> left = BuildInAndPost(inorder, postorder, postindex, size, inorderstart, pos - 1);

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

int main()
{

    // //for inorder and pre order
    // int inorder[] = {9,3,15,20,7};
    // int preorder[] = {3,9,20,15,7};
    // int size = 5;
    // int preindex = 0;
    // int inorderstart = 0;
    // int inorderend = size - 1;
    // Node* root = BuildInAndPre(inorder, preorder,size, preindex, inorderstart, inorderend );

    // cout<<" printing level order traversal: "<<endl;
    // LOT(root);


    // for inorder and postorder
    int inorder[] = {9,3,15,20,7};
    int postorder[] = {9,15,7,20,3};
    int size = 6;
    int postindex = size-1;
    int inorderstart = 0;
    int inorderend = size - 1;
    cout<<" printing inorder and postorder: "<<endl;
    Node* root = BuildInAndPost(inorder, postorder, postindex, size, inorderstart, inorderend);

    cout<<" printing level order traversal: "<<endl;
    LOT(root);

    return 0;
}