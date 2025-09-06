class Solution
{
    public:
        int getLeastFrequentDigit(int n)
        {
            map<int, int> mp;
            while(n > 0)
            {
                int r = n % 10;
                n /= 10;
                mp[r]++;
            }
            int ans, minCnt = INT_MAX;
            for (auto x: mp)
            {
                if (x.second < minCnt)
                {
                    minCnt = x.second;
                    ans = x.first;
                }
            }
            return ans;
        }
};