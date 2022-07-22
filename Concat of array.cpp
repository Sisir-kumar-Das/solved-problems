class Solution {
2
public:
3
    vector<int> getConcatenation(vector<int>& nums) {
4
        vector<int> ans;
5
        int j=1;
6
        while(j!=3){
7
        for(int i=0;i<nums.size();i++){
8
            ans.push_back(nums[i]);
9
}
10
            j++;
11
        }
12
        
13
        
14
        return ans;
15
    }
16
};