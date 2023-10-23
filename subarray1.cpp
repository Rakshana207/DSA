//Maximum subarray 
//time complexity : O(n^2)
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int >v(n);
    for(int i=0;i<n;i++){
        int ele;
        cin>>ele;
        v[i] = (ele);
    }
    vector<int >prefix(n);
    for(int i=0;i<n;i++){
        prefix[i]=v[i];
        if(i>0){
            prefix[i] += prefix[i-1];
        }
    }
    int final_max_sum = 0;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            int temp_sum = 0;
            if(i>0){
                temp_sum = prefix[j]-prefix[i-1];
            }else {
                temp_sum = prefix[j];
            }
            if(final_max_sum<temp_sum){
                final_max_sum = temp_sum;
            }
        }
    }

    cout<<final_max_sum;
    return 0;
}