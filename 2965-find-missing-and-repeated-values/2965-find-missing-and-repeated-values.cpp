class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n = grid.size();
        int repeat, missing;
        set<int> st;

        
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                if (st.count(grid[i][j])) {
                    repeat = grid[i][j]; 
                } else {
                    st.insert(grid[i][j]);
                }
            }
        }

        for (int i = 1; i <= n * n; ++i) {
            if (!st.count(i)) {
                missing = i;
                break;
            }
        }

        return {repeat, missing};
    }
};