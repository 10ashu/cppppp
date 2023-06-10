#include<iostream>
using namespace std;
bool linear(int arr[],int key,int size)
{
    if(size==0)
    {
    return false;
    }
    else
    {
        if(arr[0]==key)
        {
            return true;
        }
        else
        {
            linear(arr+1,key,size-1);
        }
    }
}
int main()
{
    int arr[5]={1,2,3,4,5};
    int key;
    cout<<"Enter the key"<<endl;
    cin>>key;
    int size=5;
    bool ans=linear(arr,key,size);
    if(ans)
    cout<<"Found"<<endl;
    else
    cout<<"Not found"<<endl;


    return 0;
}