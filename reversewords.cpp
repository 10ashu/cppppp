#include<iostream>
using namespace std;
void reverseword(string s)
{
   int v=0;
    for(int i=0;i<=s.length();i++)
    {
        if(s[i]==' '||s[i]=='\0')
        {
            int start=0+v;
            v=i+1;
            int end=i-1;
            while(start<=end)
            {
                swap(s[start],s[end]);
                start++;
                end--;
            }
            
        }

    }
    cout<<s<<endl;
}
int main()
{
    string s;
    int count=0;
    cout<<"Enter the string "<<endl;
    getline(cin,s);
    cout<<s<<endl;
    reverseword(s);
    return 0;
}