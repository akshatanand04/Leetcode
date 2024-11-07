class Solution {
public:
    int minimumCost(vector<int>& cost) {
        if(cost.size()==1) return cost[0];
        if(cost.size()==2) return (cost[0]+cost[1]);
        sort(cost.begin(),cost.end());
        int ans = 0;
        int count = 0;
        for(int i=cost.size()-1; i>=0; i--)
        {
            if(count==2)
            {
                count = 0;
                continue;
            }
            count++;
            ans += cost[i];
        }
        return ans;
    }
};