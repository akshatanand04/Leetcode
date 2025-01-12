class Solution {
public:
    vector<int> zigzagTraversal(vector<vector<int>>& grid) {
        vector<int>ans;
        int a = grid.size();
        int b =grid[0].size();
        bool flag=true;
        for(int i=0;i<a;i++){
            if(flag){
                for(int j=0;j<b;j++){
                    if(j%2==0){
                        ans.push_back(grid[i][j]);
                    }
                }
                
            }
            else{
                for(int j=b-1;j>=0;j--){
                    if(j%2==1){
                        ans.push_back(grid[i][j]);
                    }
                }
            }
            flag=!flag;
        }
        return ans;
    }
};
    
