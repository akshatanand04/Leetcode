class Solution {
public:
    int mostFrequent(vector<int>& nums, int key) {
        int i, j, count=0, max=0, ans=-1;
        for(i=0 ; i<nums.size() ; i++)
        {
            if(nums[i]==key && i<nums.size()-1 && nums[i+1]!=ans)
            {
                count=0;
                for(j=i+1 ; j<nums.size() ; j++)
                {
                    if(nums[j-1]==key && nums[j]==nums[i+1])
                    {
                        count++;
                    }
                }
                if(count>max)
                {
                    max = count;
                    ans = nums[i+1];
                }
            }
        }
        return ans;
    }
};