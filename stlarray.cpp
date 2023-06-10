#include<iostream>
#include<array>
using namespace std;
int main()
{
    int basic[3]={1,2,3};
    array<int,4> a={1,2,3,4};
    int size=a.size();
    for(int i=0;i<size;i++)
    {
        cout<<a[i]<<endl;
    }
    cout<<"Element at index 2="<<a.at(0)<<endl;
    cout<<"Empty or not="<<a.empty()<<endl;
    cout<<"Elment at front ="<<a.front()<<endl;
    cout<<"Element at back="<<a.back()<<endl;
    return 0;
}