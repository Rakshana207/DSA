//concatenate the two arrays
#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>num;
    int n;
    cin>>n;
    int element;
    for(int i=0;i<n;i++)
    {
        cin>>element;
        num.push_back(element);
    }
    vector<int>ans(2*n);
    for(int i=0;i<n;i++)
    {
        ans[i]=num[i];
    }
    for(int i=0;i<n;i++)
    {
        ans[i+n]=num[i];
    }
     for(int i=0;i<2*n;i++)
     {
        cout<<ans[i]<<" ";
     }
     return 0;


}
