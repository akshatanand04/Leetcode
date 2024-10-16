class Solution {
public:
    string longestDiverseString(int a, int b, int c) {
         string r; array<int, 3> abc{a, b, c}, possible{min(2,a), min(2,b), min(2,c)};
        while (true) {
            int i = -1, max = 0; 
            for (int j = 0; j < 3; ++j) if (possible[j] > 0 && abc[j] > max) i = j, max = abc[j];
            if (i < 0) break; r += 'a' + i; --abc[i]; --possible[i];
            for (int j = 0; j < 3; ++j) if (i != j) possible[j] = min(2, abc[j]);
        }
        return r;
    }
};