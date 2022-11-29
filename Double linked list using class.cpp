#include<bits/stdc++.h>
using namespace std;

class Node{
public:

   Node * left, *right;
   int data;

   Node(int n)
   {
     left = NULL;
     right = NULL;
     data = n;
   }

};

class BST
{
private:
    Node *root;

    //Constructor
public:
    BST()
    {
       root = NULL;
    }
    //Functions to insert data
    Insert(int data)
    {
      root = Insert(root, data);
    }
    //Function to insert data recursively
    Node * Insert(Node* node, int data)
    {
       if (node == NULL)
          node = new Node(data);
       else
       {
       if (data <= node->data)
          node->left = Insert(node->left, data);
       else
           node->right = Insert(node->right, data);
       }
    return node;

    }
  //Function for inorder traversal

  void inorder()
  {
    inorder(root);
  }
  void inorder(Node* r)
  {
    if (r!=NULL)
    {
      inorder(r->left);
      cout<<r->data<<" ";
      inorder(r->right);

    }
  }

  void preorder()
  {
    preorder(root);
  }
  void preorder(Node* r)
  {
    if (r!=NULL)
    {
      cout<<r->data<<" ";
      preorder(r->left);
      preorder(r->right);

    }
  }

void postorder()
  {
    postorder(root);
  }
  void postorder(Node* r)
  {
    if (r!=NULL)
    {
      postorder(r->left);
      postorder(r->right);
      cout<<r->data<<" ";

    }
  }
};


int main()
{
    BST bst;
    bst.Insert(10);
    bst.Insert(5);
    bst.Insert(20);
    bst.inorder();
    bst.preorder();
    bst.postorder();

    return 0;

}
