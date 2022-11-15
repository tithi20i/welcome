#include<bits/stdc++.h>
using namespace std;


class Student{
private:
    int id;
    string name;
    double cgpa;
public:

    Student(){
    }
    Student(int id, string name, double cgpa){
     this->id = id;
     this->name = name;
     this->cgpa = cgpa;
  }

  int getId(){
    return this->id;
  }
  string getName(){
    return this ->name;
  }

  double getCgpa(){
    return this->cgpa;
  }



};

int main(){
  Student s[2];

  int idd;
  string nname;
  double ccgpa;
  for(int i=0;i<2;i++){

    cin>>idd>>nname>>ccgpa;
    Student s1(idd,nname,ccgpa);
    s[i]=s1;
  }
   for(int i=0;i<2;i++){
    cout<<s[i].getId()<<" "<<s[i].getName()<<" "<<s[i].getCgpa()<<endl;
  }

  return 0;
}
