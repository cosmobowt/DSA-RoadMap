// https://leetcode.com/problems/can-place-flowers

// Input
// flowerbed = [1,0,0,0,1]
// n = 1
// Output
// true

// Input
// flowerbed = [1,0,0,0,1]
// n = 2
// Output
// false

#include<bits/stdc++.h>
using namespace std;

bool canPlaceFlowers(vector<int>& flowerbed, int n) {
    int count=0;
    for(int i=0; i<flowerbed.size(); i++){
        if(flowerbed[i]==0){
            bool leftside = (i==0) || flowerbed[i-1]==0;
            bool rightside = (i==flowerbed.size()-1) || flowerbed[i+1]==0;

            if(leftside && rightside){
                flowerbed[i]=1;
                count++;
            }
        }
    }
    if(count>=n) return true;
    else return false;
}

int main(){
    vector<int> flowerbed = {1,0,0,0,1};
    int n = 1;

    cout<<canPlaceFlowers(flowerbed, n)<<endl;
}