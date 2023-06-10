#include<iostream>
#include<map>
using namespace std;
int main()
{
    map<int,string> m;
    m[1]="Ashutosh";
    m[5]="Mishra";
    m[2]="lala";
    m.insert(5,"bheem");
    cout<<"Before erase="<<end;
    for(auto i:m)
    {
        cout<<i.first<<" "<<i.second<<endl;

    }
    cout<<"finding -13"<<m.count(-13)<<endl;

    return 0;

}