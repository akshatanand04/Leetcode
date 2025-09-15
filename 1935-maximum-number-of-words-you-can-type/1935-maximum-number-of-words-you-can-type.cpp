class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        int cntword=0;
        int cntbrkn =0;
        for(int i=0;i<text.size();i++){
            if(text[i] == ' '){
                if(cntbrkn == 0) cntword++;
                else cntbrkn = 0;
            }
            else if(brokenLetters.find(text[i]) != string::npos){
                cntbrkn++;
            }
            if(i==text.size()-1 && cntbrkn==0) cntword++;
        }
        return cntword;
    }
};