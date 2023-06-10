#include<iostream>
using namespace std;
class Node
{
    public:
    int data;
    Node* next;
    Node(int data)
    {
        this->data=data;
        this->next=NULL;
    }

};
void print(Node* &head)
{
    Node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
void insertathead(Node* &head,int d)
{
    //creating a new node
    Node* temp=new Node(d);
    temp->next=head;
    head=temp;
}
void insertattail(Node* &tail,int d)
{
    //creating a new node 
    Node* temp=new Node(d);
    tail->next=temp;
    tail=temp;
}
void insertatposition(Node* &head,Node* &tail,int pos,int d)
{
    if(pos==1)
    {
        insertathead(head,d);
        return ;
    }
    int cnt=1;
    Node* temp=head;
    while(cnt<pos-1)
    {
        temp=temp->next;
        cnt++;
    }
    if(temp->next==NULL)
    {
        insertattail(tail,d);
        return ;
    }
    Node* nodetoinsert=new Node(d);
    nodetoinsert->next=temp->next;
    temp->next=nodetoinsert;

}
void deleteanode(Node*head,int pos)
{
    Node* current=head;
    Node* pre=NULL;
    if(pos==1)
    {
        pre->next=current;
        current=current->next;  
        head=current;
        pre->next=NULL;
        delete pre;

    }
    else{

    }
}
int main()
{ 
  Node* node1=new Node(10);
  Node* head=node1;
  Node* tail=node1;
  print(head);   
  insertathead(head,12);
  print(head);
  insertathead(head,13);
  print(head);
  insertattail(tail,15);
  print(head);
  insertatposition(head,tail,3,11);
  print(head);
  insertatposition(head,tail,4,2);
  print(head);
  insertatposition(head,tail,1,1);
  print(head);
  insertatposition(head,tail,8,2);
  print(head);


    return 0;
}