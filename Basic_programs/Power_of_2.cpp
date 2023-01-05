class Solution{
    public:
    bool isPowerofTwo(long long N){
        if(N==0)return false;
        return (floor(log2(N))==ceil(log2(N)));
    }
};
