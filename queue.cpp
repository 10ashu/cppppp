#include<iostream>
#include<queue>
using  namespace std;
int main()
{
    // first in first out
    queue<string> q;
    q.push("Ashutosh");
    q.push("lala");
    q.push("Mishra");
    cout<<"Size before pop="<<q.size()<<endl;
    cout<<"First element="<<q.front()<<endl;
    q.pop();
    cout<<"First element="<<q.front()<<endl;
    cout<<"Size after pop ="<<q.size()<<endl;

    return 0;
}