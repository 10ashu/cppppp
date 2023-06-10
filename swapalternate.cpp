#include<iostream>
using namespace std;
void swapalternate(int a[],int n)
{
    for(int i=0;i<n;i+=2)
    {
        if((i+1)<n)
        {
            swap(a[i],a[i+1]);
        }
    }
}
void printalternate(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<endl;
        cout<<a[i]<<" ";
    }
}
int main()
{
    int n;
    cout<<"Enter the size of array"<<endl;
    cin>>n;
    int a[10];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    swapalternate(a,n);
    printalternate(a,n);
    return 0;
}