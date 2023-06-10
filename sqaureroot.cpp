#include<iostream>
using namespace std;
int getinteger(int n)
{
    int s=0;
    int e=n;
    int mid=s+(e-s)/2;
    int sqrt;
    int ans=-1;
    while(s<=e)
    {
     sqrt=mid*mid;
        if(sqrt==n)
        {
            return mid;
        }
        else if(sqrt<n)
        {
            ans=mid;
            s=mid+1;
        }
        else
        {
            e=mid-1;
        }
       mid=s+(e-s)/2;
    }
     return ans;
}
double moreprecision(int n,int value,int pre)
{
    double factor=1;
    double ans=value;
    for(int i=0;i<pre;i++)
    {
        factor=factor/10;
        for(double j=ans;j*j<n;j+=factor)
        {
            ans=j;
        }

    }
    return ans;
}
int main()
{
    int n;
    int pre;
    cout<<"Enter the number and precision"<<endl;
    cin>>n;
    cin>>pre;
    int value=getinteger(n);
    cout<<"Your answer will be="<<moreprecision(n,value,pre);
    return 0;
}