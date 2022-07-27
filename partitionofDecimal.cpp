class Solution {
public:
    int minPartitions(string n) {
        int ans=0;
        for(int i =0 ;i< n.size();i++){
            int curr=n[i]-48;
            ans=max(ans,curr);
            
        }
        return ans;
    }
};