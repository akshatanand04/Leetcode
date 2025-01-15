class Solution {
public:
    int minimizeXor(int num1, int num2) {
        // 3-011 5-101
        // 5 has 2 set bits

        // to minimize x xor num1 i will replace 1 with 0 from left end

        // 1-1 , 12-1100
        // if num2 has extra bits than will start making 0 to 1 from right end
        vector<int>bits1(32,0);
        vector<int>bits2(32,0);
        int set_bits1=0;
        int set_bits2=0;

        for(int i=0;i<32;i++){
            if(num1&(1<<i)){
                bits1[i]++;
                set_bits1++;
            }

            if(num2&(1<<i)){
                bits2[i]++;
                set_bits2++;
            }
        }
        // for(int i=0;i<32;i++){
        //     cout<<bits1[i]<<" ";
        // }
        // cout<<endl;
        // for(int i=0;i<32;i++){
        //     cout<<bits2[i]<<" ";
        // }
        vector<int>bits(32,0);
        for(int i=31;i>=0 && set_bits2>0;i--){
            if(bits1[i]==1){
                bits[i]=1;
                set_bits2--;
            }
        }
        // for(int i=0;i<32;i++){
        //     cout<<bits[i]<<" ";
        // }
        int i=0;
        while(set_bits2>0){
            if(bits[i]==0){
                bits[i]=1;
                set_bits2--;
                i++;
            }
            else{
                i++;
            }
        }

        long long ans=0;
        for(int i=0;i<32;i++){
            ans+=(bits[i]==1?1<<i:0);
        }

        return ans;
    }
};