#include<iostream>
#include<stdlib.h>
using namespace std;
void sort(int arr[],int n)
{
    int i=0;
    int j=n-1;
    while(i<j)
    {
        if(arr[i]==0)
        {
            i++;
        }
        else if(arr[i]==1&&arr[j]==0)
        {
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
        // if j==1
        else{
            j--;
        }
    }
}
void printarray(int arr[],int n)
{
    cout<<"Sorted array="<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i];
    }
}
int main()
{
    int arr[8]={1,1,0,1,0,1,0,1};
    sort(arr,8);
    printarray(arr,8);
    return 0;
}