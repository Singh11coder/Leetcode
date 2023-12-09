class Solution {
public:
    bool isPalindrome(string s) {
   vector<char>v;
  //  string k;
   //string g;int j=0;
   for(int i=0;i<s.length();i++)
   {
       if(s[i]>='a'&&s[i]<='z')
       {
         v.push_back(s[i]);
       }
       else if(s[i]>='A'&&s[i]<='Z')
       {
           char ch=s[i]-'A'+'a';
           v.push_back(ch);
       }
       else if(s[i]>='0'&&s[i]<='9')
       {
         v.push_back(s[i]);
       }

   }
   int l=0;
   int r=v.size()-1;
   while(l<=r)
   {

       if(v[l]!=v[r])
       {
           return 0;
           break;
       }
       l++;
       r--;
   }
   return 1;
    }
};
