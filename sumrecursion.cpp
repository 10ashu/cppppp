#include<iostream>
using namespace std;
int sum(int arr[],int size)
{
    if(size==0)
    return 0;
    if(size==1)
    return arr[0];
    int s=arr[0];
    s=s+sum(arr+1,size-1);
    return s;
}
int main()
{
    int arr[5]={1,2,3,4,5};
    int size=5;
    int ans=sum(arr,size);
    cout<<"Answer="<<ans<<endl;
    return 0;

}