#include<bits/stdc++.h>
using namespace std;


struct Node{
int data;
struct Node* next;
};

struct Node * head =NULL;
struct Node * tail =NULL;

void insertAtBeginning(int value)
{
  struct Node *n1;
  n1= new Node();
  n1->data =value;
  n1->next =NULL;

  if(head == NULL)
  {
    head = n1;
  }
  else
  {
  n1->next = head;
  head= n1;
  }

}

void insertAtEnd(int value)
{
  struct Node *n1;
  n1= new Node();
  n1->data =value;
  n1->next =NULL;

  if(head == NULL)
  {
    head = n1;
  }
  else
  {
  struct Node * temp=head;
   while(temp->next!=NULL)
    {
     temp=temp->next;
    }
     temp->next=n1;
  }

}

void deleteFromBeginning()
{

  struct Node * temp=head;
  head=temp->next;
  delete(temp);

}

void traversal()
{

   struct Node * temp=head;
   while(temp!=NULL)
   {
      cout<<temp->data<<endl;
      temp=temp->next;

   }

     cout<<"--------"<<endl;

}
int main(){
  insertAtBeginning(10);
  insertAtBeginning(20);
  traversal();
  insertAtEnd(100);
  traversal();


  return 0;
}

