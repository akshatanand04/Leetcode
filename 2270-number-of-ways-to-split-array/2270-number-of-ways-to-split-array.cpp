class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        int n = nums.size();
        long long int sum = 0;
        long long int count = 0;
        for(int i=0;i<n;i++)
        {
           sum = sum + nums[i];
        }
        long long int totalsum = 0;
        for(int i=0;i<n-1;i++)
        {
            totalsum=totalsum+nums[i];
            if(totalsum>=(sum-totalsum))
            {
                count++;
            }
        }

        return count;
    }
};