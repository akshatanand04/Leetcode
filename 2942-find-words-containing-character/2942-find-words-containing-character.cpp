class Solution {
public:
    vector<int> findWordsContaining(vector<string>& w, char x) {
        vector<int>v;
        for(int i=0;i<w.size();i++){
            for(int j=0;j<w[i].size();j++){
                if(w[i][j]==x){
                    v.push_back(i);
                    break;
                }
            }
        }
        return v;
    }
};