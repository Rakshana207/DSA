//To print the shuffle elements
#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>nums;
    int n;
    cin>>n;
    int element;
    for (int i=0;i<2*n;i++){
        cin>>element;
        nums.push_back(element);
    }
    vector<int>output(2*n);
    for(int i=0;i<n;i++)
    {
        output[2*i]=nums[i];
    }
    int value=n-1;
    for(int i=n;i<=2*n-1;i++)
    {
        output[i-value]=nums[i];
        value--;
    }
    for(int i=0;i<2*n;i++)
    {
        cout<<output[i]<<" ";
    }
    return 0;
}