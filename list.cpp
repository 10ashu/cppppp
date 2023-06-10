#include<iostream>
#include<list>
using namespace std;
int main()
{
    list<int> l;
    list<int> n(l);
    l.push_back(3);
    l.push_front(1);
    l.push_back(4);
    l.push_front(3);
    l.pop_back();
    l.pop_front();
    cout<<"Array before erase="<<l.size()<<endl;
    l.erase(l.begin());
    cout<<"Array after erase="<<l.size()<<endl;
    cout<<"Printing l="<<endl;
    for(int i:l)
    {
        cout<<i<<endl;
    }
    cout<<"Printing n"<<endl;
    for(int i:n)
    {
        cout<<i<<endl;
    }
    

    return 0;
}