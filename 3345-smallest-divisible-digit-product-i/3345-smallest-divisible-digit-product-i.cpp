class Solution {
public:
    int smallestNumber(int n, int t) {
        for (int i = n; ; i++) {
            int prod = product(i);
            if (prod % t == 0) return i;
        }
        return -1; // In case no number is found, but this should theoretically never happen
    }

    int product(int x) {
        int res = 1;
        while (x) {
            int d = x % 10;
            res *= d;
            x /= 10;
        }
        return res;
    }
};