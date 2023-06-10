#include<iostream>
using namespace std;
class Queue{
public:
int *arr;
int front;
int rear;
int size;
Queue(int size)
{
    arr=new int[size];
    this->size=size;
    front=0;
    rear=0;
}
void push(int data)
{
    if(rear==size)
    {
      cout<<"Queue is full"<<endl;
    }
    else{
        arr[rear]=data;
        rear++; 
    }
}
void pop()
{
  if(front==rear)
  {
    cout<<"Queue is empty"<<endl;
  }
  else{
    arr[front]=-1;
    front++;
    if(front==rear)
    {
        front =0;
        rear=0;
    }
  }
}
int getsize()
{
   return rear-front;
}
bool isempty()
{
   if(front==rear)
   {
    return true;
   }
   else{
    return false;
   }
}
int getfront()
{
    if(front==rear)
    cout<<"Queue is empty"<<endl;
    else
    return arr[front];
}
void print()
{
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
}
};
using namespace std;
int main()
{
       Queue q(10);
       q.push(10);
       q.push(20);
       q.push(30);
       q.push(40);
       q.push(50);
       q.print();
       q.pop();
       q.pop();
       cout<<endl;
       q.print();
       cout<<endl;
       cout<<"Size="<<q.getsize()<<endl;
       cout<<"Front="<<q.getfront()<<endl;
       if(q.isempty())
       {
            cout<<"Queue is empty"<<endl;
       }
       else{
        cout<<"Queue is not empty"<<endl;
       }



    return 0;
}