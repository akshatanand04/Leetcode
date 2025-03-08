class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        queue<int> q ; 
        int n = blocks.size(), i;
        int ans = INT_MAX; 
    
        for(i=0 ; i<k-1 ; i++){
            if(blocks[i]=='W') q.push(i); 
        }
        for( ; i<n ; i++){
            while(!q.empty() && q.front()<=i-k) q.pop();
            if(blocks[i]=='W') q.push(i);
            ans = (ans<q.size())? ans : q.size();
        }
        return ans==INT_MAX ? 0 :ans  ; 

    }
};