class Solution {
public:
    int triangularSum(vector<int>& nums) {
        int n=nums.size();
        while(n>1)
        {
            vector<int>v(n-1,0);
            for(int i=0;i<n-1;i++)
            {
                v[i]=(nums[i]+nums[i+1])%10;
            }
            nums=v;
            n--;
        }
        return nums[0];
    }
};