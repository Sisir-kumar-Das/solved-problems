class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int i=0;
        for(i=0;i<=nums.size()-1;i++){
            if(nums[i]==target)
                break;
            if (nums[i]>target)
                break;
           
        }
        return i;
     
    }
};