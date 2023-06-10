#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool checkp(string &s,int i,int j)
{
    if(i>j)
    {
        return true;
    }
    else if(s[i]!=s[j])
    {
    return false;
    }
    else
    {
        checkp(s,i+1,j-1);
    }

}
int main()
{
string s="abba";
bool ans=checkp(s,0,3);
if(ans)
{
    cout<<"Yes"<<endl;
}
else
{
    cout<<"No"<<endl;
}
    return 0;
}