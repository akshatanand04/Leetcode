class Solution {
public:
    int minOperations(vector<vector<int>>& grid, int x) {
        int mini = grid[0][0], maxi = grid[0][0];
        int m = grid.size(), n = grid[0].size();
        for(int i=0; i< m; i++){
            for(int j =0; j< n; j++){
                mini = min(mini, grid[i][j]);
                maxi = max(maxi, grid[i][j]);
            }
        }
        int s = 0, e = (maxi - mini) / x + 1, mid;
        while(s <= e){
            mid = s + (e - s)/ 2;
            int a = mini + x * mid;
            int prev = 0, curr = 0, next = 0;
            for(int i=0; i< m; i++){
                for(int j =0; j< n; j++){
                    if(abs(grid[i][j] - a) % x != 0) return -1;
                    prev += abs(grid[i][j] - a - x) / x;
                    curr += abs(grid[i][j] - a) / x;
                    next += abs(grid[i][j] - a + x) / x;
                }
            }
            if(curr <= next && curr <= prev) return curr;
            if(curr >= next && prev >= curr){
                e = mid - 1;
            }
            else s = mid + 1;
        }
        return -1;
    }
};