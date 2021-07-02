#include<iostream>
#include<bits/stdc++.h>
using namespace std;
struct Node{
    int key;
    Node *left;
    Node *right;
    Node(int n)
    {
        key=n;
        left=right=NULL;
    }
};

int max_width(Node* root)
{
    if(root==NULL)
    return 0;
    queue<Node*>q;
    q.push(root);
    int res=0;
    while(q.empty()==false)
    {
        int count=q.size();
        res=max(count,res);
        for(int i=0;i<count;i++)
        {

        Node* curr=q.front();
        q.pop();
        
        if(curr->left!=NULL)
        {
            q.push(curr->left);
        }
        if(curr->right!=NULL)
        {
            q.push(curr->right);
        }
        }
    }
    return res;
    
}
int height(Node *root)
{
    if(root==NULL)
    {
        return 0;
    }
    else
    {
        return (max(height(root->left),height(root->right))+1);
    }
    
}
bool bal_tree(Node *root)
{
    if(root==NULL)
    {
        return true;
    }
    int lh=height(root->left);
    int rh=height(root->right);
    return(abs(lh-rh)<=1 && bal_tree(root->left) && bal_tree(root->right));
}
bool Child_sum(Node *root)
{
    if(root==NULL)
    {
        return true;
    }
    if(root->left==NULL && root->right==NULL)
    {
        return true;
    }
    int sum=0;
    if(root->left!=NULL)
    {
        sum+=root->left->key;
    }
    if(root->right!=NULL)
    {
        sum+=root->right->key;
    }
    return(root->key==sum && Child_sum(root->left) && Child_sum(root->right));
}
void print(Node *root ,int k)
{
    if(root==NULL)
    {
        return;
    }
    if(k==0)
    {
        cout<<root->key<<"--";
    }
    else
    {
        print(root->left,k-1);
        print(root->right,k-1);
    }
    
}

void Inorder(Node *root)
{
    if(root!=NULL)
    {
        Inorder(root->left);
        cout<<root->key<<"---";
        Inorder(root->right);
    }
}
void Preorder(Node *root)
{
    if(root!=NULL)
    {
        cout<<root->key<<"---";
        Preorder(root->left);
        Preorder(root->right);
    }
}
void Postorder(Node *root)
{
    if(root!=NULL)
    {
        
        Postorder(root->left);
        Postorder(root->right);
        cout<<root->key<<"---";
    }
}
void printlevel(Node* root)
{
    if(root==NULL)
    return;
    queue<Node*>q;
    q.push(root);
    while(q.empty()==false)
    {
        Node* curr=q.front();
        q.pop();
        cout<<curr->key<<"---";
        if(curr->left!=NULL)
        {
            q.push(curr->left);
        }
        if(curr->right!=NULL)
        {
            q.push(curr->right);
        }
    }
    
}
int Tree_Size(Node* root)
{
    if(root==NULL)
    {
        return 0;
    }
    else
    {
        return 1+Tree_Size(root->left)+Tree_Size(root->right);
    }
    
}
void printlevellbl(Node* root)
{
    if(root==NULL)
    return;
    queue<Node*>q;
    q.push(root);
    q.push(NULL);
    while(q.size()>1)
    {
        Node* curr=q.front();
        q.pop();
        if(curr==NULL)
        {
            cout<<"\n";
            q.push(NULL);
        }
        else
        {
            
    
        
        cout<<curr->key<<"---";
        if(curr->left!=NULL)
        {
            q.push(curr->left);
        }
        if(curr->right!=NULL)
        {
            q.push(curr->right);
        }
        }
    }
    
}
int Max_Tree(Node* root)
{
    if(root==NULL)
    {
        return INT_MIN;
    }
    else
    {
        return max(root->key,max(Max_Tree(root->left),Max_Tree(root->right)));
    }
    
}
int main()
{
    Node *root=new Node(20);
    root->left=new Node(8);
    root->right=new Node(12);
    root->right->right=new Node(9);
    root->right->left=new Node(3);
    cout<<max_width(root);
}