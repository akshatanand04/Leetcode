class Solution {
public:
    bool checkValidCuts(int n, vector<vector<int>>& rectangles) {
        vector<pair<int, int>> x;
        vector<pair<int, int>> y;

        for (auto it : rectangles) {
            x.push_back(make_pair(it[0], 1));
            x.push_back(make_pair(it[2], -1));
            y.push_back(make_pair(it[1], 1));
            y.push_back(make_pair(it[3], -1));
        }

        sort(x.begin(), x.end());
        sort(y.begin(), y.end());

        int cntxz = 0;
        int cntyz = 0;
        int cnt = 0;
        for (auto it : x) {
            cnt += it.second;
            if (cnt == 0) {
                cntxz++;
            }
        }
        if (cntxz > 2) {
            return true;
        }
        cnt = 0;
        for (auto it : y) {
            cnt += it.second;
            if (cnt == 0) {
                cntyz++;
            }
        }
        if (cntyz > 2) {
            return true;
        }

        return false;
    }
};