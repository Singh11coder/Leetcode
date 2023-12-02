class Solution {
public:
    double myPow(double x, long long n) {
        if(n==0)return 1;
        if(n<0)
        {
          x=1/x; 
          n=-n;
        }
        double res=myPow(x,n/2);
        if(n&1)
        {
            return (x*(res*res));
        }
        else
        {
            return (res*res);
        }
    }
};
