class Solution {
public:
    int countWords(vector<string>& words1, vector<string>& words2) {
        int cnt=0;
        for(int i=0;i<words1.size();i++)
        {
            if((count(words1.begin(),words1.end(),words1[i])==1)&&(count(words2.begin(),words2.end(),words1[i])==1))
                ++cnt;
        }
        return cnt;
    }
};