class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
         sort(nums.begin(),nums.end());
         int t=nums.size()-1;
         int p=(nums[t]*nums[t-1])-(nums[0]*nums[1]);
         return p;
    }
};
