class Solution {
public:
    int maxFreqSum(string s) {
        unordered_map<char,int> mpp;
        for(char i:s){
            mpp[i]+=1;
        }
        int vc=0,cc=0;
        for(auto i:mpp){
            if(i.first=='a' || i.first=='e' ||i.first=='i' ||i.first=='o'||i.first=='u')vc=max(vc,i.second);
            else{
                cc=max(cc,i.second);
            }
        }
        return vc+cc;
    }
};