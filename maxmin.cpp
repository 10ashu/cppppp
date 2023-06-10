#include<iostream>
#include<limits.h>
using namespace std;
int maxarray(int a[],int n)
{
    int maxi=INT_MIN;
    for(int i=0;i<n;i++)
    {
      maxi=max(maxi,a[i]);
    }
    return maxi;
}
int minarray(int a[],int n)
{
    int mini= INT_MAX;
    for(int i=0;i<n;i++)
    {
        mini=min(mini,a[i]);
    }
    return mini;
}
int main()
{
    int n;
    cout<<"Enter the size of array"<<endl;
    cin>>n;
    int a[100];
    int choice;
    cout<<"Enter 1 for max and 2 for min"<<endl;
    cin>>choice;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    if(choice==1)
    {
        cout<<"Maximum Value="<<maxarray(a,n);
    }
    else{
        cout<<"Minimum Value="<<minarray(a,n);
    }
    return 0;
}