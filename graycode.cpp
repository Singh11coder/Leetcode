class Solution {
public:
    
    vector<int> grayCode(int n) 
    {
      vector<int>v(1,0);
      for(int i=0;i<n;i++)
      {
        int sz=v.size();
        for(int j=sz-1;j>=0;j--)
        {
          int val=v[j]|(1<<i);
          v.push_back(val);
        }
      }
      return v;
    }
};
