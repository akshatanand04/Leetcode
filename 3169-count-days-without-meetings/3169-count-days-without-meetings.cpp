class Solution {
public:
    int countDays(int days, vector<vector<int>>& meetings) {
        sort(meetings.begin(),meetings.end());
        int start=0;
        int res=0;
        for(int i=0;i<meetings.size();i++)
        { int c=meetings[i][0];
        if(c-start>0)
        res+=c-start-1;
        start=max(start,meetings[i][1]);
        }
        res+=days-start;
        return res;
    }
};