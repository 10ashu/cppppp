#include<iostream>
using namespace std;
int main(){
    string s;
    cout<<"Enter the string "<<endl;
    cin>>s;
    int count[26]={0};
    for(int i=0;i<s.length();i++)
    {
        int number=s[i]-'a';
        count[number]++;
    }
    int maxi=-1,ans=0;
    for(int i=0;i<26;i++)
    {
        if(maxi<count[i])
        {
            ans=i;
            maxi=count[i];
        }
    }
    char ch=ans+'a';
    cout<<"Answer="<<ch;
    return 0;
}