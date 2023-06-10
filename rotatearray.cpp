#include<bits/stdc++.h>
using namespace std;
void rotatearray(int arr[][3] , int n,int m)
{ 
      for(int i=0;i<n;i++)
      {
        for(int j=i;j<m;j++)
        {
            swap(arr[i][j],arr[j][i]);
        }
      }
      for(int i=0;i<n/2;i++)
      {
        for(int j=0;j<m;j++)
        {
            swap(arr[i][j],arr[n-1-i][j]);
        }
      }
      cout<<"After rotating"<<endl;
      for(int i=0;i<n;i++)
      {
        for(int j=0;j<m;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
      }
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
    rotatearray(arr,3,3);
   return 0;
}
