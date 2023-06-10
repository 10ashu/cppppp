#include<iostream>
#include<vector>
using namespace std;
vector<int> reversearray(vector<int> v)
{
    int s=0;
    int e=v.size()-1;
    while (s<=e)
    {
        swap(v[s],v[e]);
        s++;
        e--;
    }
    return v;
     
}
void printarray(vector<int> ans)
{
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    vector<int> v;
    v.push_back(5);
     v.push_back(6);
      v.push_back(7);
       v.push_back(8);
        v.push_back(9);
      vector<int> ans=  reversearray(v);
        printarray(ans);
    return 0;
}