class Solution {
public:
    bool doesValidArrayExist(vector<int>& derived) {
        int n=derived.size();
        vector<int>orig(n);
        orig[0]=0;
        for(int i=0;i<n;i++)
        {
            if(i!=n-1)  orig[i+1]=orig[i]^derived[i];
            if(i==n-1&&orig[0]==orig[i]^derived[i])  return true;
        }
        orig[0]=1;
          for(int i=0;i<n;i++)
        {
            if(i!=n-1)  orig[i+1]=orig[i]^derived[i];
            if(i==n-1&&orig[0]==orig[i]^derived[i])  return true;
        }
        return false;
    }
};