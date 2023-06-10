#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v;
    vector<int> a(5,1);
    vector<int> last(a);
    cout<<"Last="<<endl;
    for(int i=0;i<last.size();i++)
    {
        cout<<last[i]<<endl;
    }
    cout<<"Array="<<endl;
    for(int i=0;i<a.size();i++)
    {
        cout<<a[i]<<endl;
    }
    cout<<"Capacity="<<v.capacity()<<endl;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    cout<<"Size="<<v.size()<<endl;
    cout<<"Element at index 2="<<v.at(2)<<endl;
    cout<<"Element at front= "<<v.front()<<endl;
    cout<<"Element at back="<<v.back()<<endl;
    cout<<"Before pop"<<endl;
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<endl;
    }
    v.pop_back();
    cout<<"After pop"<<endl;
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<endl;
    }
    cout<<"Before clear="<<v.size()<<endl;
    v.clear();
    cout<<"After clear="<<v.size()<<endl;



    return 0;
}