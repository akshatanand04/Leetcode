class Solution {
public:
    bool areOccurrencesEqual(string s) {
        unordered_map<char,int>mp;
        for(auto i : s){
            mp[i]++;
        }
        for(int i=0;i<s.size()-1;i++){
    if(mp[s[i]]!=mp[s[i+1]]){
        return false;
       }
    }
    return true;
        
    }
};