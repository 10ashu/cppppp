#include<iostream>
using namespace std;
int firstoccurence(int arr[],int n,int key)
{
    int start=0;
    int end=n-1;
    int mid=start+(end-start)/2;
    int ans=0;
    while(start<=end)
    {
        if(arr[mid]==key)
        {
          ans=mid;
          end=mid-1;
        }
        else if(key>arr[mid])
        {
            start=mid+1;
        }
        else
        {
            end=mid-1;
        }
         mid=start+(end-start)/2;
    }
    return ans;
}
int lastoccurence(int arr[],int n,int key)
{
    int start=0;
    int end=n-1;
    int mid=start+(end-start)/2;
    int ans=0;
    while(start<=end)
    {
        if(arr[mid]==key)
        {
          ans=mid;
          start=mid+1;
        }
        else if(key>arr[mid])
        {
            start=mid+1;
        }
        else
        {
            end=mid-1;
        }
         mid=start+(end-start)/2;
    }
    return ans;
}
int main()
{
    int arr[8]={1,2,3,3,3,3,3,8};
    cout<<"First occurence of 3="<<firstoccurence(arr,8,3)<<endl;
    cout<<"Last occurence of 3="<<lastoccurence(arr,8,3)<<endl;

    return 0;
}