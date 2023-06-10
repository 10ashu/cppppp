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
    while (temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
void insertathead(Node* &head,int d)
{
    Node* temp=new Node(d);
    temp->next=head;
    head=temp;
}
void insertattail(Node* &tail,int d)
{
    Node* temp=new Node(d);
    tail->next=temp;
    tail=temp;
}
void insertatpos(Node* &head,Node* &tail,int pos,int d)
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
int main()
{
    Node* node1=new Node(10);
    Node* head=node1;
    Node* tail=node1;
    print(head);
    insertathead(head,6);
    print(head);
   insertattail(tail,13);
   print(head);
   insertatpos(head,tail,3,2);
   print(head);
    insertatpos(head,tail,3,11);
  print(head);
  insertatpos(head,tail,4,2);
  print(head);
  insertatpos(head,tail,1,1);
  print(head);
  insertatpos(head,tail,7,2);
  print(head);

    return 0;
}