class Solution {
public:
    long long countSubarrays(vector<int>& nums, long long k) {
        int a = 0;
        int b = 0;
        long long sum = 0;
        long long score = 0;
        while (b<nums.size())
        {
            sum += nums[b]; 
            while(a<= b && sum * (b-a+1) >= k)
            {
                sum -= nums[a];
                a++;
            }
            score+= (b-a+1);
            b++; 
        }
        return score;
    }
};