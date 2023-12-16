class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        
        string ans;
        map<string,int>m;
        for(int i=0;i<strs.size();i++)
        {
            m[strs[i]]++;
        }
        if(m.size()==1 )ans=strs[0];
        else
        {
        for(int i=0;i<strs[0].length();i++)
        {
            char ch=strs[0][i];
            bool match=true;
            for(int j=1;j<strs.size();j++)
            {
                if(strs.size()<i || ch!=strs[j][i])
                {
                    match=false;
                    break;
                }
            }
            if(match==false)
            {
               break;
            }
           else
           {
                ans.push_back(ch);
           }
           
        }
        }
        return ans;

    }
};