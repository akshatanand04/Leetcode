class Solution {
public:
    long long repairCars(vector<int>& ranks, int cars) {
        long long low = 1,
                  high = (long long)(*min_element(ranks.begin(), ranks.end())) *
                         cars * cars;
        while (low <= high) {
            long long mid = low + (high - low) / 2;
            if (isPossible(mid, ranks, cars))
                high = mid - 1;
            else
                low = mid + 1;
        }
        return low;
    }
    bool isPossible(long long time, vector<int>& ranks, int cars) {
        long long repcar = 0;
        for (auto it : ranks)
            repcar += (long long)sqrt(time / it);
        return repcar >= cars;
    }
};