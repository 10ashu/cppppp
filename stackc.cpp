
#include<iostream>
using namespace std;
class Stack {
   
public:
      int *arr;
      int top;
      int size;
  
      Stack(int size)
      {
        arr=new int[size];
        this->size=size;
        top = -1;
      }
      void push(int data)
      {
         if(size-top>1)
         {
            top++;
            arr[top]=data;
         }
         else
         {
            cout<<"Stack Overflow"<<endl;
         }
      }
      void pop()
      {
            if(top==-1)
            {
                cout<<"Stack Underflow"<<endl;
            }
            else
            {
                top--;
            }
      }
      int gettop()
      {
            if(top==-1)
            {
                cout<<"Stack Underflow"<<endl;
            }
            else
            {
                return arr[top];
            }
      }
      int getsize()
      {
         if(top==-1)
         {
            cout<<"Stack Underflow"<<endl;
         }
         else
         {
            return top+1;
         }
      }
      bool isempty()
      {
        if(top==-1)
        {
            return true;
        }
        else
        {
            return false;
        }
      }


};
int main()
{
  Stack c(5);
  c.push(10);
  c.push(20);
  c.push(30);
  c.push(40);
  c.push(50);
  c.pop();
  c.pop();
  cout<<"Size="<<c.getsize()<<endl;;
  while(!c.isempty())
  {
    cout<<c.gettop()<<" ";
    c.pop();
  }

    return 0;
}