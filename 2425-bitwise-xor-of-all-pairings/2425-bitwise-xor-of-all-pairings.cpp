class Solution {
public:
    int xorAllNums(vector<int>& nums1, vector<int>& nums2) {
        int a = nums1.size();
        int b = nums2.size();

        if (a % 2 == 0 && b % 2 == 0) {
            return 0;
        }

        int ans = 0;

        if (a % 2 != 0) {
            for (int num : nums2) {
                ans ^= num;
            }
        }

        if (b % 2 != 0) {
            for (int num : nums1) {
                ans ^= num;
            }
        }

        return ans;
    }
};