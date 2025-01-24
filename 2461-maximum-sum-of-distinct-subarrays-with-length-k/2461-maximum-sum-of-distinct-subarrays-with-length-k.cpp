class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k)
     {
        long long sum = 0;
        int i = 0, j = 0;
        int n = nums.size();
        unordered_map<int, int> mp;
        long long maxx = 0;

        while (j < n)
         {
            
            mp[nums[j]]++;
            sum += nums[j];

            if ((j - i + 1) < k) 
            {
                j++;

            }
            else if (j - i + 1 == k)
             {
                if (mp.size() == k) 
                {
                    maxx = max(maxx, sum);
                }

                sum -= nums[i];
                mp[nums[i]]--;

                if (mp[nums[i]] == 0) 
                {  
                    mp.erase(nums[i]);
                }
                i++;
                j++;
             }
        }
        return maxx;
    }
};