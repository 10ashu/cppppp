#include<iostream>
using namespace std;
int gcd(int a,int b)
{
    if(a==0)
    return b;
    if(b==0)
    return a;
    while (a!=b)
    {
        if(a>b)
        a=a-b;
        else
        b=b-a;
    }
    return b;
    
}
int main()
{
    int a,b;
    cout<<"Enter the two numbers to find gcd"<<endl;
    cin>>a>>b;
    int ans=gcd(a,b);
    cout<<"Greatest Common factor of"<<a<<" & "<<b<<" = "<<ans<<endl;
}