#include<iostream>
using namespace std;
bool issorted(int arr[],int size)
{
    if(size==0||size==1)
    {
    return true;
   }
    else
    {
        if(arr[0]>arr[1])
        {
            return false;
        }
        else{
            issorted(arr+1,size-1);
        }
    }
}
int main()
{
    int arr[5]={0,0,0,0,0};
    int size=5;
    bool ans=issorted(arr,size);
    if(ans)
    {
        cout<<"Array is sorted"<<endl;

    }
    else
    {
        cout<<"Array is not sorted"<<endl;

    }
    return 0;
}