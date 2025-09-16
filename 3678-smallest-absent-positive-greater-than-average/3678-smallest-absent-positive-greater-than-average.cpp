class Solution {
public:
    int smallestAbsent(vector<int>& nums) {
        int avg=0;
        int sum=0;
        unordered_map<int,int>mp;
        for(int i:nums)
         {
               sum+=i;
               mp[i]++;
         }
         int n=nums.size();
        // avg=sum/(nums.size()*1.0);
        avg=ceil(sum/n);
        int ans= avg<0 ?1:++avg;
        while(mp.find(ans)!=mp.end())
        {
            ans++;
        }
        return ans;
    }
};