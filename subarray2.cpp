//Maximum subarray
//time complexity: O(n^3)
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


    int final_max_ans = 0;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            int temp_ans = 0;
            for(int k=i;k<=j;k++){
                temp_ans += v[k];
            }
            if(final_max_ans < temp_ans){
                final_max_ans = temp_ans;
            }
        }
    }
    cout<<final_max_ans;
    return 0;
}