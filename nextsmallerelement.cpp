#include<bits/stdc++.h>
using namespace std;
vector<int> nextsmaller(vector<int> &input)
{
    stack<int> st;
    st.push(-1);
    vector<int> ans;
    for(int i=input.size()-1;i>=0;i--)
    {
         int curr=input[i];
         while (st.top()>=curr)
         {
           st.pop();
         }
         ans.push_back(st.top());
         st.push(curr);
         
    }
    return ans;
}
vector<int> previoussmaller(vector<int> &input)
{
     stack<int> st;
     st.push(-1);
     vector<int> ans;
     for(int i=0;i<input.size();i++)
     {
           int curr=input[i];
           while(st.top()>=curr)
           {
              st.pop();  
           }
           ans.push_back(st.top());
           st.push(input[i]);
     }
     return ans;
}
int main()
{
    vector<int> input;
    input.push_back(1);
    input.push_back(3);
    input.push_back(4);
    input.push_back(2);
    vector<int> ans1=nextsmaller(input);
    cout<<"Next smaller element"<<endl;
    for(int i=0;i<ans1.size();i++)
    {
      cout<<ans1[i]<<" ";
    }
    cout<<endl;
    vector<int> ans2=previoussmaller(input);
    cout<<"Previous smaller element"<<endl;
    for(int i=0;i<ans2.size();i++)
    {
        cout<<ans2[i]<<" ";
    }
    cout<<endl;
 return 0;
}