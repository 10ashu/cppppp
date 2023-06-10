#include<iostream>
using nmaespace std;
int main()
{
    int l=0;
    int m=0;
    int h=n-1;
    while(m<=h)
    {
        if(arr[m]==1)
        {
            m++;
        }
        else if(arr[m]==0 )
        {
            swap(arr[l],arr[m]);
            l++;
            m++;
        }
        // case of arr[m]==2
        else{ 
             swap(arr[m],arr[h]);
             h--;
          
        }
    }
    return 0;
}
