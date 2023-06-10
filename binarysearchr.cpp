#include<iostream>
using namespace std;
bool binary(int arr[],int s,int e,int key)
{
    if(s>e)
    {
        return false;
    }
    int mid=s+(e-s)/2;
    if(arr[mid]==key){
        return true;
    }
    else if(key>arr[mid])
    {
        binary(arr,mid+1,e,key);
    }
    else
    {
        binary(arr,s,mid-1,key);
    }
}
int main()
{
    int arr[5]={1,2,3,4,5};
    int size=5;
    int key;
    cout<<"Enter the key"<<endl;
    cin>>key;
    bool ans=binary(arr,0,4,key);
    if(ans)
    {
        cout<<"Found"<<endl;
    }
    else
    {
        cout<<"Not found"<<endl;
    }
    return 0;
}