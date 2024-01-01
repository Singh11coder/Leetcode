class Solution {
public:
    int reverse(int x) 
    {
    //if(x>pow(2,31)||x<-(pow(2,31)))return 0;
    int ans=0;
    while(x!=0)
    {
    if(ans>pow(2,31)/10||ans<-(pow(2,31)/10))return 0;
    int digit=x%10;
    ans=(ans*10)+digit;
    x=x/10;
          
    }
        return ans;
        
        
    }
};
