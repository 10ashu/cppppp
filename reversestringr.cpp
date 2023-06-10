#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void reverse(string &s,int i)
{
    if(i>=(s.length()-1-i))
    {
        return ;
    }
    swap(s[i],s[s.length()-1-i] );
    reverse(s,i+1,(s.length()-2-i));

}
int main()
{
    string s="ashu";
    reverse(s,0);
    cout<<"Reverse"<<endl;
    cout<<s<<endl;
    return 0;
}