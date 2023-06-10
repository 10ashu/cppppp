#include<iostream>
using namespace std;
bool linearsearch(int a[],int n,int key)
{
    for(int i=0;i<n;i++)
    {
        if(a[i]==key)
        {
            return 1;
        }
    }
    return 0;

}
int main()
{
    int n;
    cout<<"Enter the size of the array"<<endl;
    cin>>n;
    int a[10];
    cout<<"Enter the array"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"Enter the key"<<endl;
    int key ;
    cin>>key;
    bool found=linearsearch(a,n,key);
    if(found)
    {
        cout<<"Present"<<endl;
    }
    else{
        cout<<"Absent "<<endl;
    }

    return 0;
}