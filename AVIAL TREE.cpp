// CREATE AN AVIAL TREE
// Elements are: 15, 7, 3,

// Create one AVL tree for the following set of elements:- 60, 8, 93, 78, 80, 109, 6, 9, 12, 15, 17

#include<iostream>
#include<cmath>
using namespace std;

struct Node
{
    int data;
    Node* left;
    Node* right;
    int height;
};

Node* create(int item)
{
    Node* newnode = new Node;
    newnode->data = item;
    newnode->left = nullptr;
    newnode->right = nullptr;
    newnode->height = 1;

    return newnode;
}

//def of findheight.........
int findheight(Node* root)
{
    if(root == 0)
        return 0;
    return root->height;
}

//balance/.....
int getbalance(Node* root)
{
    if(root == nullptr)
        return 0;
    return findheight(root->left) - findheight(root->right);
}

//left rotate...
Node* leftRotate(Node* x)
{
    Node* y = x->right;
    Node* R1 = y->left;

    y->left = x;
    x->right = R1;

    x->height = max(findheight(x->left), findheight(x->right)) + 1;
    y->height = max(findheight(y->left), findheight(y->right)) + 1;

    return y;
}

//right rotate.....
Node* rightRotate(Node* y)
{
    Node* x = y->left;
    Node* R1 = x->right;

    x->right = y;
    y->left = R1;

    y->height = max(findheight(y->left), findheight(y->right)) + 1;
    x->height = max(findheight(x->left), findheight(x->right)) + 1;

    return x;
}

Node* insert(Node* root, int item)
{
    if(root == nullptr)
        return create(item);
    if(item < root->data)
    {
        root->left = insert(root->left, item);
    }
    else if(item > root->data)
    {
        root->right = insert(root->right, item);
    }

    return root;

    //height......

    root->height =1 + max(findheight(root->left), findheight(root->right));

    //check Balance factor...
    int bf = getbalance(root);

    //left-left case.........
    if(bf > 1 && item < root->left->data)
    {
        return rightRotate(root);
    }

    //RR case
    else if(bf < -1 && item > root->right->data)
    {
        return leftRotate(root);
    }

    //LR case
    else if(bf > 1 && item > root->left->data)
    {
        root->left = leftRotate(root->left);
        return rightRotate(root);
    }

    //RL case
    else if(bf < -1 && item < root->right->data)
    {
        root->right = rightRotate(root->right);
        return leftRotate(root);
    }

    return root;
}

void display(Node* root)
{
    if(root == nullptr)
        return;
    display(root->left);
    cout<<root->data<<" ";
    display(root->right);

}

int main()
{
    Node* root = NULL;
    int n;
    cout<<"Enter the range: ";
    cin>>n;

    int a[n];
    cout<<"Enter all the elements: ";
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        root = insert(root, a[i]);
    }
    cout<<"AVL Tree is Created Successfully,....."<<endl;

    cout<<"Inorder Traversal is: ";
    display(root);

    return 0;

}













