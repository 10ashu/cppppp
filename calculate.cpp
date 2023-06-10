#include<iostream>
using namespace std;
int solve(int a,int b)
{
    if(b==0)
    {
        return 1;
    }
   if(b==1)
   {
    return a;
   }
   int ans=solve(a,b/2);
    if(b%2==0)
    {
     return  ans*ans;
    }
    else
    {
       return  a*ans*ans;
    }
}
int main()
{
int a,b;
cout<<"Enter the value if a and b"<<endl;
cin>>a>>b;
int ans=solve(a,b);
cout<<"Answer="<<ans;
}