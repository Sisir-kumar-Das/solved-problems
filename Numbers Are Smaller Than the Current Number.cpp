class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int>ans(nums.size());
        int count=0;
        for(int i =0;i<nums.size();i++){
            for(int j=0;j<nums.size();j++){
                if(nums[i]>nums[j])
                    count++;
            }
            ans[i]=count;
            count=0;
        }
        return ans;
        
    }
};