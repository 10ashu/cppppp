#include<bits/stdc++.h>
#include<string.h>
using namespace std;
void saydigits(int n,string arr[])
{
    if(n==0)
    return ;
    int digit=n%10;
    n=n/10;
      
  saydigits(n,arr);
 cout<<endl<<arr[digit]<<endl;

}
int main()
{
    int n;
    cout<<"Enter the number "<<endl;
    cin>>n;
    string arr[10]= { "zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    saydigits(n,arr);
    return 0;
}