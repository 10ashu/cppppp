#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void colsum(int arr[][3],int row,int col)
{
    int count=0;
    for(int i=0;i<col;i++)
    {
        int sum=0;
        int j=0;
        for(;j<row;j++)
        {
            sum=sum+arr[j][i];
        }
        cout<<"Sum of "<<count<<" col="<<sum<<endl;
        count++;
    }
}
void rowsum(int arr[][3],int row ,int col)
{
    int maxi= INT_MIN;
    int maxindex=-1;
    for(int i=0;i<row;i++)
      {
        int sum=0;
        for(int j=0;j<col;j++)
        {
            sum=sum+arr[i][j];
        }
        cout<<"Sum of "<<i<<" Row="<<sum<<endl;
        if(maxi<sum)
        {
            maxi=sum;
            maxindex=i;
        }
      }
    cout<<"Maximum row index="<<maxindex<<endl;
    cout<<"Maximum row sum="<<maxi<<endl;
}
bool ispresent(int arr[][3],int row ,int col,int target)
{
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            if(arr[i][j]==target)
            return true;
        }
    }
    return false;
}
int main()
{
     int arr[3][3];
     cout<<"Enter the array"<<endl;
     for(int i=0;i<3;i++)
     {
        for(int j=0;j<3;j++)
        {
            cin>>arr[i][j];
        }
     }
     cout<<"Input array"<<endl;
     for(int i=0;i<3;i++)
     {
        for(int j=0;j<3;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
     }
     int target;
     cout<<"Enter the element to be searched "<<endl;
     cin>>target;
     if(ispresent(arr,3,3,target))
     cout<<"Present"<<endl;
     else
     cout<<"Not present"<<endl;
     rowsum(arr,3,3);
     colsum(arr,3,3);
    return 0;
}