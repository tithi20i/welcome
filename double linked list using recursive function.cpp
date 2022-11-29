#include<bits/stdc++.h>
using namespace std;

struct Node
{
  struct Node * left;
  int data;
  struct Node * right;
};

void inorder (struct Node *root){
  if (root != NULL){
    //Traverse left
    inorder(root->left);

    //Traverse root
    cout<<root->data<<" -> ";

    //Traverse right
    inorder(root->right);
  }

}

struct Node * newNode(int val)
{
  Node *temp = new Node();
  temp->data = val;
  temp->right = NULL;
  temp->left = NULL;

  return temp;
}

struct Node* Insert(Node* root, int val)
{


   if(root == NULL)
   {
      root = newNode(val);
   }
   else if(val< root->data)
      root->left = Insert(root->left,val);
   else
      root->right = Insert(root->right,val);

return root;

}

int main(){

struct Node * root= NULL;
root = Insert(root, 10);
root = Insert(root, 5);
root = Insert(root, 20);

inorder(root);

return 0;

}


