#include<iostream>
using namespace std;
int binarysearch(int arr[],int n,int key)
{
    int s=0;
    int e=n-1;
    int mid= s+(e-s)/2;
    while(s<=e)
    {
        if(arr[mid]==key)
        {
        return mid;
        }
        else if(key>arr[mid])
        {
            s=mid+1;
        }
        else
        {
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return -1;
}
int main()
{
    int even[8]={1,2,3,4,5,6,7,8};
    int odd[7]={1,2,3,4,5,6,7};
    cout<<"Index of 4 in an even array="<<binarysearch(even,8,4)<<endl;
    cout<<"Index of 4 in the odd array="<<binarysearch(odd,7,8)<<endl;

    return 0;
}
