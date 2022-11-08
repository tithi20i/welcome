#include<bits/stdc++.h>
using namespace std;

template<typename T>

class Queue{

private:

int n;
T *a;
int head=0;
int tail=0;
int counter;

public:
    Queue(){
        n=10;
        a=new T[n];
        head=0;
        tail=0;
        counter=0;

    }

    Queue(int n){
        this->n=n;
        a=new T[n];
        head=0;
        tail=0;
        counter=0;
    }

    bool isFull()
{
    return tail==n?true:false;
}

bool isEmpty()
{
    return tail==head?true:false;
}


void push(int value)
{
    if(isFull())
    {
        cout<<"Full\n";
        return;
    }
    else
    {
        a[tail]=value;
        tail++;
        counter++;
    }


}

T pop()
{

    if(!isEmpty())
    {
        int x = a[head];
        head++;
        counter--;
        return x;

    }
    else
    {
        cout<<"Empty"<<endl;
    }
}

void Print()
{
    for(int i=head; i<tail; i++)
    {
        cout<<a[i]<<" ";
    }

}

};

int main(){

Queue <double> q(5);
q.push(10.5);
q.push(2.8);
q.push(3.6);
q.Print();
cout<<endl<<q.pop()<<endl;
q.Print();

return 0;
}

