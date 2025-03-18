class Solution {
public:
    int longestNiceSubarray(vector<int>& nums) {
        int l = 0, r = 0, n = nums.size();
        int ans = 0, bitmask = 0;

        while(r < n){
            while((bitmask & nums[r]) != 0){  
                bitmask ^= nums[l++]; 
            }

            bitmask |= nums[r];  
            ans = max(ans, r - l + 1);
            r++;
        } 
        return ans;
    }
};