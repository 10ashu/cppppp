#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(4);
    v.push_back(3);
    cout<<"Finding 6="<<binary_search(v.begin(),v.end(),6)<<endl;
    cout<<"Lower bound="<<lower_bound(v.begin(),v.end(),2)-v.begin()<<endl;
    cout<<"Upper bound="<<upper_bound(v.begin(),v.end(),4)-v.begin()<<endl;
    int a=4;
    int b=5;
    cout<<"Max="<<max(a,b)<<endl;
    cout<<"Min="<<min(a,b)<<endl;
    swap(a,b);
    cout<<"Swap="<<a<<" "<<b<<endl;
    string abcd="abcd";
    reverse(abcd.begin(),abcd.end());
    cout<<" Reverse String ="<<abcd<<endl;
    rotate(v.begin(),v.begin()+1,v.end());
    cout<<"After rotate"<<endl;
    for(int i:v)
    {
        cout<<i<<" "<<endl;
    }



    return 0;
}