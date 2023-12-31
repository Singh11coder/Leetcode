class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        int maxi=0;
        int flag=0;
        sort(nums.begin(),nums.end());
        for(int i=nums.size()-1;i>=2;i--)
        {
           if((nums[i]+nums[i-1]>nums[i-2])&&(nums[i-1]+nums[i-2]>nums[i])&&(nums[i]+nums[i-2]>nums[i-1]))
           {
               flag=1;
               int y=nums[i]+nums[i-1]+nums[i-2];
               maxi=max(maxi,y);
               break;
           }

        }

        if(flag=0)
        {
            return 0;
        }
        return maxi;
    }
};
