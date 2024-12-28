class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int h,l,mid;
        l=0;
        h=nums.size();
        if(target > nums[h-1]){
            return h;
        }
        while(l<=h){
            mid=(l + h)/2;
            if(nums[mid] == target){
                return mid;
            }
            if(target < nums[mid]){
                h = mid - 1;
            }
            else{
                l = mid + 1;
            }
        }
        return l;
    }
};