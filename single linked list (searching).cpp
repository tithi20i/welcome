#include<bits/stdc++.h>
using namespace std;


struct Node{
int data;
struct Node* next;
};

struct Node * head =NULL;

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
void traversal(){

struct Node * temp=head;
 while(temp!=NULL){
  cout<<temp->data<<endl;
  temp=temp->next;

 }
 cout<<"--------"<<endl;

}

int Search(int value){

struct Node * temp = head;

while(temp!=NULL){
  if (value == temp->data) return 1;
  temp=temp->next;
}
  return 0;
}

/*void deleteFromEnd(){
  struct Node * temp=head;

  while(temp->next->next!=NULL){
      temp=temp
  if (value == temp->data) return 1;
  temp=temp->next;
}
  return 0;

}

void searchAndDelete(int value){



}*/

int main(){
  insertAtBeginning(10);
  insertAtBeginning(20);
  traversal();
  insertAtEnd(100);
  insertAtEnd(200);
  insertAtEnd(300);
  traversal();

  if(Search(100)) cout<<"Found";
  else cout<<"Not Found";

  return 0;
}
