#include<iostream>
#include<stack>
usingn namespace std;
int main()
{
    stack<string> s;
    // last in first out
    s.push("Ashutosh");
    s.push("lala");
    s.push("Mishra");
    cout<<"Element at the top ="<<s.top()<<endl;
    s.pop();
    cout<<"Element at the top = "<<s.top()<<endl;
    cout<<"Size of the stack="<<s.size()<<endl;
    cout<<"Empty or not="<<s.empty()<<endl;
    return 0;
}