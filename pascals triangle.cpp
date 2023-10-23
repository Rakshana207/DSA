//Pascals triangle:-
//time complexity: O(n^2)
#include <bits/stdc++.h>
using namespace std;

int main(){
    int numsRows;
    cin>>numsRows;
    vector<vector<int > >v(numsRows);

    for(int i=0;i<numsRows;i++){
        if(i==0){
            v[i].push_back(1);
        }else {
            for(int j=0;j<(i+1);j++){
                int value = 0;
                if(j<v[i-1].size()){
                    value += v[i-1][j];
                }
                if(j-1>=0){
                    value += v[i-1][j-1];
                }
                // v[i].push_back(v[i-1][j]+v[i-1][j-1]);
                v[i].push_back(value);
            }
        }
    }
    cout<<"printing the pascals triange :-\n";
    for(int i=0;i<numsRows;i++){
        for(int j=0;j<v[i].size();j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}