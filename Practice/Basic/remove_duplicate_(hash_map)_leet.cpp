
#include <bits/stdc++.h>


using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        
        // Using HasMap 
        
        unordered_map<int, int> m;
        int j = 0;
        
        for (int i= 0; i < nums.size(); i++){
            if (m[nums[i]] == 0){
                m[nums[i]]++;
                nums[j] = nums[i];
                j++;
            }
        }
            
            
            return j;
        }
        
};
        
        