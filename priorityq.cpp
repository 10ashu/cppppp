#include<iostream>
#include<queue>
using namespace std;
int main()
{ 
     //for max heap
    priority_queue<int> maxi;
    // for min heap
    priority_queue<int, vector<int> , greater<int> > mini;
    maxi.push(1);
    maxi.push(2);
    maxi.push(0);
    maxi.push(4);
    cout<<"Size="<<maxi.size()<<endl;
    int n= maxi.size();
    for(int i=0;i<n;i++)
    {
        cout<<maxi.top()<<" ";
        maxi.pop();
    }
    cout<<endl;
    mini.push(1);
    mini.push(5);
    mini.push(4);
    mini.push(7);
    mini.push(4);
    int m=mini.size();
    for(int i=0;i<m;i++)
    {
        cout<<mini.top()<<endl;
        mini.pop();
    }
    cout<<"Empty or not "<<mini.empty();
    return 0;
}