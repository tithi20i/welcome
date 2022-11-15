#include<bits/stdc++.h>
using namespace std;



struct Node{
int data;
struct Node* next;
};


  int main(){
   Node *n1 = new Node();
   n1->data = 10;
   n1->next = NULL;

   Node *n2 = new Node();
   n2->data = 20;
   n2->next = NULL;

   Node *n3 = new Node();
   n3->data = 30;
n3->next = NULL;

n1->next = n2;
n2->next = n3;

Node *head = n1;
Node *temp = n1;

//while(n1->next!=NULL){
        while(temp!=NULL){
  //cout<<n1->data<<" ";
  cout<<temp->data<<" ";
   //n1=n1->next;
   temp=temp->next;
}
//cout<<n1->data<<endl;

return 0;
}
