#include<bits/stdc++.h>
using namespace std;

template <typename T>
class Stack{
private:
    int top;
    T *a;
    int s;
public:
    Stack(int n){
        top=-1;
        s=n;
        a = new T[n];
    }

bool isFull(){
    if(top==s-1){
        return true;
    }
return false;
}


void push(T data){

    if(isFull()){
        cout<<"Stack Overflow"<<endl;
    }else{
        top++;
        a[top]=data;
    }
}

void print(){

    for(int i=top;i>=0;i--){
        cout<<a[i]<<endl;
    }
cout<<"\n";
}

bool isEmpty(){
if(top<0){
    return true;
}
return false;

}

T pop(){

    if(isEmpty()){
        cout<<"Stack is empty"<<endl;
    }else{
        T value = a[top];
        top--;
        return value;
    }
}
};


struct Student{
  int id;
  string name;
  double cgpa;

};
int main(){
  Student s[3];
  for(int i=0;i<3;i++){
    cin>>s[i].id>>s[i].name>>s[i].cgpa;
  }
   for(int i=0;i<3;i++){
    cout<<s[i].id<<" "<<s[i].name<<" "<<s[i].cgpa<<endl;
  }

  /*Student s1={100,"Tithi",3.8};
  Student s2={200,}
  Stack<Student> St;
  St.push(s1);
  St.push(s2);

  Student s3=St.pop();

  cout<<s3.id<<" "<<s3.name<<" "<<s3.cgpa;*/

return 0;
}

