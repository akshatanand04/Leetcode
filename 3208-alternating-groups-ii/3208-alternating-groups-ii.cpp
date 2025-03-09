class Solution {
public:
    int numberOfAlternatingGroups(vector<int>& colors, int k) {
        int n = colors.size();
        if(k > n) return 0;
        int res = 0, cnt = 0, st = 0;
        while(cnt < k) colors.push_back(colors[cnt++]);
        for(int i=1; i<colors.size(); i++) {
            if(i-st == k) {
                res++;
                st++;
            }
            if(colors[i] == colors[i-1]) {
                st = i;
            }
        }
        return res;
    }
};