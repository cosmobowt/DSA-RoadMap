// https://leetcode.com/problems/gas-station

// Input
// gas = [1,2,3,4,5]
// cost = [3,4,5,1,2]
// Output
// 3

// Input
// gas = [2,3,4]
// cost = [3,4,3]
// Output
// -1

#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> gas = {1,2,3,4,5};
    vector<int> cost = {3,4,5,1,2};

    int n = gas.size();
    int totalgas=0, currgas=0, ans=0;

    for(int i=0; i<n; i++){
        totalgas += gas[i]-cost[i];
        currgas += gas[i]-cost[i];

        if(currgas<0){
            ans = i+1;
            currgas=0;
        }
    }
    if(totalgas<0) cout<<-1<<endl;
    else cout<<ans<<endl;
}