class Solution {
public:
    int minElement(vector<int>& nums) {
        int minnum = INT_MAX;
        int a = 0;
        for(int i : nums){
            string s = to_string(i);
            int sum = 0;
            for(char c : s){
                string s1;
                s1+=c;
                sum += stoi(s1);
            }
            nums[a] = sum;
            minnum = min(minnum, nums[a]);
            a++; 
        }

        return minnum;
    }
};