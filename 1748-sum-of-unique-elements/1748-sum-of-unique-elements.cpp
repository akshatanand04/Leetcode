class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        unordered_map<int,int>m;
        int sum=0;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
        }
        for(int i=0;i<nums.size();i++){
            if(m[nums[i]]<=1){
                sum+=nums[i];
            }
        }
        return sum;
    }
};