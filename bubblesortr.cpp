#include<iostream>
using namespace std;
void bubblesort(int arr[],int size)
{
    if(size==0||size==1)
    return ;
    for(int i=0;i<size-1;i++)
    {
        if(arr[i]>arr[i+1])
        swap(arr[i+1],arr[i]);

    }
    bubblesort(arr,size-1);
}
int main()
{
int arr[9]={5,4,3,2,1,1,1,1,11};
int size=9;
bubblesort(arr,size);
for(int i=0;i<size;i++)
{
    cout<<arr[i]<<" ";
}
cout<<endl;
 return 0;
}