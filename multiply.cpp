#include<iostream>
using namespace std;
int multiply(int arr[],int size)
{
    if(size==0)
    return 1;
  //  if(size==1)
 //   return arr[0];
    int m=arr[0];
    m=m*multiply(arr+1,size-1);
    return m;
}
int main()
{
    int arr[5]={20,2,3,4,5};
    int size=5;
    int ans=multiply(arr,size);
    cout<<"Answer="<<ans;

    return 0;
}