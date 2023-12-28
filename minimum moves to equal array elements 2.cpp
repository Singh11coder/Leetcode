class Solution {
public:
    int minMoves2(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        long long sum1=0;
        long long sum2=0;
        if(nums.size()%2==0)
        {
            int mid=(0+nums.size()-1)/2;
            for(int i=0;i<=mid;i++)
            {
               sum1=sum1+nums[i];
            }
            for(int i=mid+1;i<nums.size();i++)
            {
                sum2=sum2+nums[i];
            }
        }
        else
        {
            int mid=(0+nums.size()-1)/2;
            for(int i=0;i<mid;i++)
            {
                sum1=sum1+nums[i];
            }
            for(int i=mid+1;i<nums.size();i++)
            {
                sum2=sum2+nums[i];
            }
        }
        return sum2-sum1;
       
    }
};
