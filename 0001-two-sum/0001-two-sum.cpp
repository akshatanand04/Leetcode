class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>ans;
        unordered_map<int,int> m;
        int r=0;
        for(int i=0;i<nums.size();i++){
            r = target-nums[i];
            if(m.find(r)!=m.end()){
                ans.push_back(m[r]);
                ans.push_back(i);
            }
            else{
                m[nums[i]]=i;
            }
        }
        return ans;
    }
};