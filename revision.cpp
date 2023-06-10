#include<iostream>
using namespace std;
int sqrt(int n)
{
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    int ans=-1;
    while(s<=e)
    {
        int square=mid*mid;
         if(square==n)
         return mid;
         if(square>n)
         {
            e=mid-1;
         }
         else
         {
            ans=mid;
            s=mid+1;
         }
         mid=s+(e-s)/2;
    }
    return ans;
}
double morepresion(int n,int point,int temp)
{
    double factor=1;
    double ans=-1;
    for(int i=0;i<point;i++)
    {
        factor=factor/10;
        for(double j=temp;j*j<n;j=j+factor)
        {
            ans=j;
        }
    }
    return ans;
}
int main()
{
    int n;
    cout<<"Enter the number"<<endl;
    cin>>n;
    int ans=sqrt(n);
    cout<<"Answer="<<morepresion(n,3,ans);
    return 0;
}