class Solution {
public:

    bool isZero(vector<int>&nums){
        for(int i:nums){
            if(i!=0)
                return false;
        }
        return true;
    }
    bool difarrayteq(vector<int>&nums,vector<vector<int>>& queries,int k){
        vector<int>dif(nums.size(),0);
        for(int i=0;i<=k;i++){
            int l = queries[i][0];
            int r = queries[i][1];
            int val = queries[i][2];

            dif[l] += val;
            if((r+1)<nums.size())
                dif[r+1] -= val;
        }
        int cumsum = 0;
        for(int i=0;i<nums.size();i++){
            cumsum += dif[i];
            dif[i] = cumsum;
            if(nums[i]>dif[i])
                return false; 
        }
        return true;
    }
    int minZeroArray(vector<int>& nums, vector<vector<int>>& queries) {
        int n = nums.size();
        int q = queries.size();

        if(isZero(nums))
            return 0;
        
        int s=0,e=q-1,k=-1;
        while(s<=e){
            int mid = s+(e-s)/2;
        if(difarrayteq(nums,queries,mid)){
            k = mid+1;
            e = mid-1;
        }
        else
            s = mid+1;
        }
        
        return k;
    }
};
