class Solution {
public:
    int thirdMax(vector<int>& nums) {
        map<int,int>m;
        for(int i=0;i<nums.size();i++)
        {
            m[nums[i]]++;
        }
        vector<int>v;
        for(auto i:m)
        {
          v.push_back(i.first);
        }
        sort(v.begin(),v.end());
        if(v.size()<3)
        {
            int maxi=0;
            for(int i=0;i<v.size();i++)
            {
                maxi=max(maxi,v[i]);
            }
            return maxi;
        }
        return v[v.size()-4];
    }
};
