class Solution {
public:
    vector<int> partitionLabels(string s) {
        int n = s.length();
        cout << n;
        vector<vector<int>> p(26, vector<int>(2, -1));
        for (int i = 0; i < n; i++) {
            if (p[s[i] - 'a'][0] == -1) {
                p[s[i] - 'a'][0] = i;
                p[s[i] - 'a'][1] = i;
            } else if (p[s[i] - 'a'][0] != -1) {
                p[s[i] - 'a'][1] = i;
            }
        }
        vector<int> ans;
        int last = INT_MIN;
        int prev = 0;
        for (int i = 0; i < n; i++) {
            last = max(p[s[i] - 'a'][1], last);
            if (last == i) {
                if (ans.empty()) {
                    ans.push_back(last - prev + 1);
                } else {
                    ans.push_back(last - prev);
                }
                prev = last;
            }
        }
        return ans;
    }
};