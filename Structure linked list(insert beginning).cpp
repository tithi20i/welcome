#include<bits/stdc++.h>
using namespace std;


struct Node{
int data;
struct Node* next;
};

struct Node * head =NULL;

void insertAtBeginning(int value){
  struct Node *n1;
  n1= new Node();
  n1->data =value;
  n1->next =NULL;

if(head == NULL){
    head = n1;
}else{
n1->next = head;
head= n1;
}

}

int main(){
  insertAtBeginning(10);
  insertAtBeginning(20);

struct Node * temp =head;
  while(temp!=NULL){
    cout<<temp->data<<" ";
    temp=temp->next;
  }
  return 0;
}
