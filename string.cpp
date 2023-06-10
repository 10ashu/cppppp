#include<iostream>
#include<vector>
using namespace std;
int check(char arr[],int n)
{
     int s=0;
     int e=n-1;
     while(s<=e)
     {
        if(arr[s]==arr[e])
        {
            s++;
            e--;
        }
        else{
            return 0;
        }
     }
     return 1;
}
void reverse(char arr[],int n)
{
int s=0;
int e=n-1;
while(s<=e)
{
    swap(arr[s],arr[e]);
    s++;
    e--;
}
}

int length(char arr[])
{ 
    int count=0;
    for(int i=0;arr[i]!='\0';i++)
    {
       count++;
    }
    return count;
}
int main()
{
    char arr[20];
    cout<<"Enter any string "<<endl;
    cin>>arr;
    int n=length(arr);
    cout<<"Length of the string="<<n<<endl;
    reverse(arr,n);
    cout<<"Reverse of the string="<<arr<<endl;
    cout<<"Palindrome or not="<<check(arr,n)<<endl;
    return 0;
}