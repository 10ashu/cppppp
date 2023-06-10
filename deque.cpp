#include<iostream>
#include<deque>
using namespace std;
int main()
{
    // isme front aur back  se dono se insertion aur deletion ho sakta h 
    deque<int> d;
    d.push_front(1);
    d.push_front(3);
    d.push_back(2);
    d.push_back(4);
    cout<<"Array="<<endl;
    for(int i=0;i<d.size();i++)
     {
        cout<<d[i]<<endl;
     }
     cout<<"1st index element ="<<d.at(1)<<endl;
     cout<<"Front element="<<d.front()<<endl;
     cout<<"Back element="<<d.back()<<endl;
     cout<<"Empty or not="<<d.empty()<<endl;

    cout<<"Before erase="<<d.size()<<endl;
    d.erase(d.begin(),d.begin()+1);
    cout<<"After erase="<<d.size()<<endl;


    return 0;
}