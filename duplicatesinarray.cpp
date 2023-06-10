#include<iostream>
#include<vector>
using namespace std;
int duplicatearray(vector<int> v,int size)
{
    vector<int> ans;
    for(int i=0;i<size;i++)
    {
        for(int j=i+1;j<size;j++)
        {
            if(v[i]==v[j])
            {
                 ans.push_back(v[i]);
                 break;
            }
        }
    }
    cout<<"Answer will be="<<endl;
    for(int i=0;i<v.size();i++)
    {
        cout<<ans[i]<<" ";
    }
}
int main()
{
    vector<int> arr;
    arr.push_back(4);
     arr.push_back(3);
     arr.push_back(3);
      arr.push_back(4);
       arr.push_back(2);
        arr.push_back(1);
         arr.push_back(6);
          arr.push_back(1);
          arr.push_back(6);
          arr.push_back(2);

    duplicatearray(arr,10);

    return 0;
}