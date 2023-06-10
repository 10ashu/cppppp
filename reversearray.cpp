#include<iostream>
using namespace std;
int reversearray(int a[],int n)
{
     int start=0;
     int end=n-1;
     while (start<=end)
     {
        swap(a[start],a[end]);
        start++;
        end--;
     }
     for(int i=0;i<n;i++)
     {
        cout<<a[i]<<" ";
     }
}
int  main()
{
    int n;
    cout<<"Enter the size of the array"<<endl;
    cin>>n;
    int a[10];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    reversearray(a,n);

    return 0;
}