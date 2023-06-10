#include<iostream>
using namespace std;
void merge(int arr[],int s,int e)
{
    int mid=s+(e-s)/2;
    int len1=mid-s+1;
    int len2=e-mid;
    int *arr1=new int[len1];
    int *arr2=new int[len2];
    int k=s;
    for(int i=0;i<len1;i++)
    {
        arr1[i]=arr[k++];
    }
    k=mid+1;
    for(int i=0;i<len2;i++)
    {
        arr2[i]=arr[k++];
    }
    int i=0,j=0;
    k=s;
    while (i<len1&&j<len2)
    {
       if(arr1[i]<arr2[j])
       {
        arr[k++]=arr1[i++];
       }    
       else
       {
        arr[k++]=arr2[j++];
       }
    }
    while(i<len1)
    {
        arr[k++]=arr1[i++];
    }
    while (j<len2)
    {
        arr[k++]=arr2[j++];
    }
    delete []arr1;
    delete []arr2;
    
}
void mergesort(int arr[],int s,int e)
{
    int mid=s+(e-s)/2;
      if(s>=e)
      {
        return ;
      }
      mergesort(arr,s,mid);
      mergesort(arr,mid+1,e);
      merge(arr,s,e);
    
}
int main()
{
    int arr[5]={1,2,3,4,5};
    int size=5;
    mergesort(arr,0,4);
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}