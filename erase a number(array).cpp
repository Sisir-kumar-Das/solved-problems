class Solution {
2
public:
3
    int removeElement(vector<int>& nums, int val) {
4
        vector <int> :: iterator it;
5
        it=nums.begin();
6
        for(int i =0 ; i< nums.size();i++){
7
            if(nums[i]==val){
8
                nums.erase(it);
9
                it--;
10
                i--;
11
            }
12
            it++;
13
        }
14
        return nums.size();
15
        
16
    }
17
};