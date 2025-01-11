class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
        int count = 0;
        int diff;
        for(int i = 0; i < nums.size()-1; i++){
            for(int j = i; j < nums.size(); j++){
                diff = abs(nums[i] - nums[j]);
                if(diff == k){
                    count++;
                }

            }
        }
        return count;

    }
};