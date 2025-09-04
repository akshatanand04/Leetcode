class Solution {
public:
    int findClosest(int x, int y, int z) {
        int a,b;
        a = abs(x-z);
        b = abs(y-z);
        int ans;
        if(a==b){
            ans = 0;
        }
         else if(a>b){
            ans = 2;
        } 
        else { 
            ans = 1;
        }
       
    return ans;
    }

};