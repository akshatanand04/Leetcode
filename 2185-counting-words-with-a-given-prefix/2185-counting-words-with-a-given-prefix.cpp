class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int n = words.size(); 
        int c = 0;        

        for (int i = 0; i < words.size(); i++)
        {
            if (pref.size() > words[i].size()) 
            {
                continue;
            }

             if (words[i].find(pref) == 0) 
             {
                c++; 
             }
        }

        return c; 
    }
};