class Solution {
public:
    int maxScore(string s) {
        int n = s.length(), sum = 0, temp, ans = 0;

        vector<int> vec(n);
        for(int i=0;i<n;i++){
            if(s[i] == '0') sum++;
            vec[i] = sum;
        }

        for(int i=0;i<n-1;i++){
            temp = vec[i];
            temp += n - (i+1) - (sum - vec[i]);

            ans = max(temp, ans);
        }

        return ans;
    }
};