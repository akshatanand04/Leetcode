class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int count = 0;
        int low = 0 , high = nums.size()-1;
        while(low<high){
            if(nums[low] + nums[high] == k){
                low++;
                high--;
                count++;
            }
            else if(nums[low] + nums[high] < k){
                low++;
            }
            else {
                high--;
            }
        }
      return count;  
    }
};